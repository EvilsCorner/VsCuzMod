package;

import flixel.input.keyboard.FlxKeyboard.FlxKeyInput;
import flixel.input.keyboard.FlxKeyboard;
import flixel.input.gamepad.FlxGamepad;
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;
import openfl.Lib;
import Controls.Control;
import flash.text.TextField;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;
import flixel.group.FlxGroup.FlxTypedGroup;
import flixel.input.keyboard.FlxKey;
import flixel.math.FlxMath;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.math.FlxPoint;
import lime.utils.Assets;

class CreditsMenu extends MusicBeatState
{
	public static var instance:CreditsMenu;

	var curSelected:Int = -1;

	public var acceptInput:Bool = true;

	private var consoleInput:String = "TEST";
	private var input:FlxKeyboard;
	private var consoleText:Alphabet;
	private static var CreditsArray:Array<String> 
		= [ '- Acrylicqueen - \nDirector, Sprite Artist, \nWriting, Backgrounds',
			'- EvilsCorner - \nDirector, Animator, Backgrounds',
			'- Splootulu - \nCutscene Illustrator',
			'- Crashtroid - \nComposer, Charts',
			'- Damonj17_ - \nComposer, Charts',
			'- Sikowny - \nCode'
		];
	private var CreditsText:Array<FlxText> = new Array<FlxText>(); // dont make this static otherwise it refuses to update when you exit the menu and come back
	public var staffIcons = new FlxTypedGroup<FlxSprite>();

	var consoleBox:FlxSprite;
	var scaleHelper:Int;

	override function create()
	{
		//clean();
		instance = this;
		var menuBG:FlxSprite = new FlxSprite().loadGraphic(Paths.image("menuDesat"));

		//menuBG.color = 0xFFea71fd;
		menuBG.setGraphicSize(Std.int(menuBG.width * 1.1));
		menuBG.updateHitbox();
		menuBG.screenCenter();
		menuBG.antialiasing = FlxG.save.data.antialiasing;
		add(menuBG);

		// draw credits ---------------------
		/*
		consoleBox = new FlxSprite((FlxG.width*(2/5)-50, FlxG.height/32).makeGraphic(
			(Std.int(FlxG.width*(3/5)+100)),Std.int(FlxG.height*(15/16)),
			FlxColor.BLACK);
		*/
		// they liked this one better
		consoleBox = new FlxSprite(400, FlxG.height/32).makeGraphic(
			(480),Std.int(FlxG.height*(15/16)),
			FlxColor.BLACK);
		consoleBox.alpha = 0.6;
		add(consoleBox);
		
		add(staffIcons);

		//var iconZ = new FlxSprite().loadGraphic(Paths.image('Credits/credits' + i+1), true, 148, 189);
		for(i in 0...CreditsArray.length) {
			var offsetY = FlxG.height/9;
			var staffIcon_:FlxSprite = new FlxSprite(0, 0);

			staffIcon_.loadGraphic(Paths.image('Credits/credits' + (i)), true, 225, 280); /// fuCk off
			staffIcon_.animation.add('icon', [0, 1], 0, false);
			staffIcon_.animation.play('icon');
			if(i > 0)
			{
				offsetY += FlxG.height/32;
			}
			staffIcon_.ID = i; //necessary for animation changes defined in update
			staffIcon_.x = FlxG.width/4 + FlxG.width/4*(2*((i+1)%2)) - staffIcon_.width/2;  // add offset every odd number 
			staffIcon_.y = (offsetY * (i+1)) - staffIcon_.height/2;
			staffIcon_.updateHitbox();
			staffIcon_.antialiasing = FlxG.save.data.antialiasing;
			if(i %2 == 0) staffIcon_.y += 25; /// kept separate cause fuck

			staffIcons.add(staffIcon_);


			//text
			// not sure why this fails to draw after opening the credits menu a second time...
			// CAUSE UR NOT SUPPOSED TO MAKE IT STATIC LOL
			var temp = new FlxText(0, 0, FlxG.width, CreditsArray[i] , 24);
			temp.setFormat("VCR OSD Mono", 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			temp.screenCenter(X); // center it first
			temp.x += 0; // offset after
			temp.y = offsetY * (i+1);
			CreditsText.push(temp);
			add(CreditsText[i]); // push adds to the end of the array, so this is fine

			scaleHelper = Std.int(staffIcon_.width); // this is fucking dumb
			
		}
		
		//static text
		var instruct1 = new FlxText(FlxG.width/32, FlxG.height*(15/16), 0, 
										"[ENTER] - Visit twitter page     "
									  + "[ESC] - Back to menu" , 20);
		instruct1.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(instruct1);

		
		
		//consoleBox = new FlxSprite(FlxG.width/4, 7.5*FlxG.height/8).makeGraphic((Std.int(0.5*FlxG.width)),Std.int(0.125*FlxG.height),FlxColor.BLACK);
		
		//FlxTween.tween(versionShit,{y: FlxG.height - 18},2,{ease: FlxEase.elasticInOut});
		super.create();
	}

	

	override function update(elapsed:Float)
	{
		// draw credits
		
		for(i in 0...CreditsArray.length) {
			if(i == curSelected) 
			{
				CreditsText[i].alpha = 1.0;
			}
			else 
			{
				CreditsText[i].alpha = 0.5;
			}
		}
		
		if (acceptInput)
		{
			// 0 is the top most option
			if(FlxG.keys.justPressed.UP)
			{
				if (curSelected > 0) 
				{
					changeItem(-1);
				}
			}
			if(FlxG.keys.justPressed.DOWN)
				if (curSelected < CreditsArray.length-1) 
				{
					changeItem(1);
				}
			if (controls.BACK)
			{
				FlxG.switchState(new MainMenuState());
			}
			if (controls.ACCEPT)
			{
				switch(curSelected) 
				{
					case 0:
						CoolUtil.browserLoad("https://twitter.com/acrylicqueen");
					case 1:
						CoolUtil.browserLoad("https://twitter.com/EvilsCorner");
					case 2:
						CoolUtil.browserLoad("https://twitter.com/splootulu");
					case 3:
						CoolUtil.browserLoad("https://twitter.com/crashtroid");
					case 4:
						CoolUtil.browserLoad("https://twitter.com/Damonj17_");
					case 5:
						CoolUtil.browserLoad("https://twitter.com/sikowny");
					default:
				}
			}
			if(FlxG.keys.justPressed.RIGHT)
				{
					Unlockables.clearUnlocks();
				}
			if(FlxG.keys.justPressed.LEFT)
				{
					Unlockables.unlockAll();
				}

			var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
		}

		if(curSelected == -1)
			changeItem(1);

		FlxG.save.flush();
		super.update(elapsed);

	}

	function changeItem(huh:Int = 0)
		{
			FlxG.sound.play(Paths.sound('scrollMenu'));
			curSelected += huh;

			// update sprites
			
			staffIcons.forEach(function(spr:FlxSprite)
			{
				//spr.animation.play('idle');
				spr.centerOrigin();
	
				if (spr.ID == curSelected)
				{
					spr.animation.curAnim.curFrame = 1;
					//spr.scale = FlxPoint.get(1, 1);
					spr.setGraphicSize(Std.int(scaleHelper*1.0));
					// nudge the sprite over so its nice and centered?
					// or just do this is the sprite files lmoa
				} else {
					spr.animation.curAnim.curFrame = 0;
					spr.setGraphicSize(Std.int(scaleHelper*0.9));
					//spr.scale = FlxPoint.get(1, 1);
					//spr.scale.set(Std.int(1.1));
				}
	
				//spr.updateHitbox();
			});
			
		}

}
