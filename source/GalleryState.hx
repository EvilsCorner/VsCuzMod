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

class GalleryState extends MusicBeatState
{
	public static var instance:GalleryState;

	var curSelected:Int = -1;
	public var acceptInput:Bool = true;

	var consoleBox:FlxSprite;
	var descBox:FlxSprite;
	var scaleHelper:Int;

	var titleText:FlxText;
	var leftArrow:FlxSprite;
	var rightArrow:FlxSprite;
	var ui_tex = Paths.getSparrowAtlas('campaign_menu_UI_assets');

	var menuBG:FlxSprite;

	// these are pretty dumb, i could just use a txt file.
	private static var galleryDesc:Array<String> 
	= [ 'Cuz First Drawing', 
		'Cuz First Design',
		'Cuz Ref Songs 1',
		'Cuz Song 3 Poses',
		'Cuz Sketchpile',
		'Cuz Doodle',
		'Cuz Menu Image Sketch',
		'Cuz Title Screen Sketch',
		'Cuz Slash Sketch 1',
		'Cuz Slash Sketch 2',
		'Cuz Slash Sketch 3',
		'Cuz Swipe First Iteration',
		'Cuz Swipe Reel back Unused',
		'Cuz Sword Swipe Unused',
		'Firmly Grasp It',
		'Girlfriend Poses Ref Sheet',
		'gf game over cringe sketch',
		'gf skeleton sketch',
		'GF Screech Sketch',
		'The hell is that',
		'No Furries',
		'Overcalculation',
		'Reeheehee',
		'Them Flustered',
		'Cutscene 1 Stroll',
		'Cutscene 2 Throw',
		'Cutscene 3 Stab',
		'Cutscene 4 Stranger',
		'Cutscene 5 Friendly Conversation',
		'Cutscene 6 Lunge',
		'Cutscene 7 Meat Shield',
		'Cutscene 8 Tense Conversation',
		'Cutscene 9 Dire Situation',
		'Week Bonus Background Sketch',
		'Week Cuz Background First Sketch',
		'Week Cuz Background Refined Sketch',
		"PRIVATE!! Do NOT Press ENTER. Don't!! DON'T PRESS IT!!!"
	];

	private static var contrabandDesc:Array<String> 
	= [ 'Burger King', 
		'Coffee Date', 
		'Grapes', 
		'Him Booty', 
		'Malakai Eyes', 
		"Malakai's Shirt", 
		'Old Malakai', 
		'Partners in Crime', 
		'Pemis', 
		'Pride Bitches', 
		'WEINER'
	];
	private var descText:FlxText;
	public var exhibits = new FlxTypedGroup<FlxSprite>();
	public var contraBand = new FlxTypedGroup<FlxSprite>();
	var currGalleryTotal = 0;
	var contraToggle:Bool = false;
	var exhibitTotal = galleryDesc.length;
	var contraBandTotal = contrabandDesc.length;

	override function create()
	{
		//clean();
		instance = this;


		menuBG = new FlxSprite().loadGraphic(Paths.image("menuDesat"));

		//menuBG.color = 0xFFea71fd;
		menuBG.setGraphicSize(Std.int(menuBG.width * 1.0));
		menuBG.updateHitbox();
		menuBG.screenCenter();
		menuBG.antialiasing = FlxG.save.data.antialiasing;
		menuBG.alpha = 0.7;
		add(menuBG);

		consoleBox = new FlxSprite(0,0).makeGraphic(
			Std.int(FlxG.width*(15/16)),Std.int(FlxG.height*(15/16)),
			FlxColor.BLACK);
		consoleBox.alpha = 0.6;
		consoleBox.screenCenter();
		//add(consoleBox);

		descBox = new FlxSprite(0,FlxG.height*7/8 - 20).makeGraphic(
			Std.int(FlxG.width*(15/16)),100,
			FlxColor.BLACK);
		descBox.alpha = 0.6;
		descBox.screenCenter(X);

		// add all images and text
		//exhibits.screenCenter();
		add(exhibits);
		add(contraBand);
		add(descBox);

		for(i in 0...exhibitTotal) {
			var exhibit_:FlxSprite = new FlxSprite(0, 0);

			//doesnt load jpgs... why?
			// do this in update when you actually select one cause this lags the game a bunch at the start
			exhibit_.loadGraphic(Paths.image('gallery/' + i));

			//rescaling
			/*
			if(exhibit_.width > FlxG.width || exhibit_.height > FlxG.height)
			{
				
				if(exhibit_.width >= exhibit_.height)
				{
					//scale width
					exhibit_.setGraphicSize(Std.int(FlxG.width));
				}
				else{
					//scale height
					exhibit_.setGraphicSize(0, Std.int(FlxG.height));
				}
			}
			*/
			exhibit_.updateHitbox();
			exhibit_.ID = i; //necessary for animation changes defined in update
			exhibit_.screenCenter();

			exhibit_.visible = false;
			if(i == 0)
			{
				exhibit_.visible = true;
			}
			exhibits.add(exhibit_);


			//text
			/*
			var temp = new FlxText(0, FlxG.height*7/8, 0, galleryDesc[i] , 24);
			temp.setFormat("VCR OSD Mono", 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
			temp.screenCenter(X); // center it first
			temp.visible = false;
			galleryDescText.push(temp);
			add(galleryDescText[i]); // push adds to the end of the array, so this is fine
			*/
		}

		for(i in 0...contraBandTotal) {
			var exhibit_:FlxSprite = new FlxSprite(0, 0);

			exhibit_.loadGraphic(Paths.image('gallery/Contraband/' + i));
			exhibit_.updateHitbox();
			exhibit_.ID = i; //necessary for animation changes defined in update
			exhibit_.screenCenter();

			exhibit_.visible = false;
			if(i == 0)
			{
				//exhibit_.visible = true;
			}
			contraBand.add(exhibit_);
		}
		
		
		//static text
		var instruct1 = new FlxText(FlxG.width/32, FlxG.height*(15/16), 0, 
										"[ARROWS] - Change image     "
									  + "[ESC] - Back to menu" , 20);
		instruct1.setFormat("VCR OSD Mono", 16, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(instruct1);

		titleText = new FlxText(FlxG.width*6/8, FlxG.height*15/16, 0, "Gallery   " , 24);
		titleText.setFormat("VCR OSD Mono", 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(titleText);

		// Arrows
		leftArrow = new FlxSprite(10 , 0);
		leftArrow.screenCenter(Y);
		leftArrow.frames = ui_tex;
		leftArrow.animation.addByPrefix('idle', "arrow left");
		leftArrow.animation.addByPrefix('press', "arrow push left");
		leftArrow.animation.play('idle');
	
		rightArrow = new FlxSprite(FlxG.width-55, 0);
		rightArrow.screenCenter(Y);
		rightArrow.frames = ui_tex;
		rightArrow.animation.addByPrefix('idle', 'arrow right');
		rightArrow.animation.addByPrefix('press', "arrow push right", 24, false);
		rightArrow.animation.play('idle');

		add(leftArrow);
		add(rightArrow);

		// description thingy
		descText = new FlxText(0, FlxG.height*7/8, 0, "----" , 24);
		descText.setFormat("VCR OSD Mono", 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		descText.screenCenter(X);
		add(descText);

		super.create();
	}

	

	override function update(elapsed:Float)
	{
		if(!contraToggle){
			currGalleryTotal = exhibitTotal;
			menuBG.color = FlxColor.WHITE;
		}
		else{
			currGalleryTotal = contraBandTotal;
			menuBG.color = FlxColor.RED;
		}


		if (acceptInput)
		{
			// 0 is the first option
			if(FlxG.keys.justPressed.LEFT)
			{
				if (curSelected > 0) 
				{
					changeItem(-1);
				} else {
					changeItem(currGalleryTotal-1, true);
				}
			}
			if(FlxG.keys.justPressed.RIGHT)
			{
				if (curSelected < currGalleryTotal-1) 
				{
					changeItem(1);
				} else {
					changeItem(0,true);
				}
			}
			if(FlxG.keys.justPressed.UP)
			{
				consoleBox.alpha = 0;
			}
			if(FlxG.keys.justPressed.DOWN)
			{
				consoleBox.alpha = 0.6;
			}

			if (controls.BACK)
			{
				FlxG.switchState(new MainMenuState());
			}
			if (controls.ACCEPT)
			{
				if(curSelected == currGalleryTotal-1 && !contraToggle)
				{
					contraToggle = !contraToggle;
					changeItem(0,true);
				} else if (contraToggle) {
					contraToggle = !contraToggle;
					changeItem(0,true);
				}
			}

			// animation
			if (controls.UI_RIGHT)
				rightArrow.animation.play('press')
			else
				rightArrow.animation.play('idle');

			if (controls.UI_LEFT)
				leftArrow.animation.play('press');
			else
				leftArrow.animation.play('idle');


			var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
		}

		if(curSelected == -1)
			changeItem(1);

		if(!contraToggle)
			titleText.text = 'Gallery   ' + (curSelected+1) + '/' + (currGalleryTotal);
		else
			titleText.text = 'Contraband   ' + (curSelected+1) + '/' + (currGalleryTotal);

		super.update(elapsed);
	}

	function changeItem(huh:Int = 0, ?redirect:Bool = false)
	{
		FlxG.sound.play(Paths.sound('scrollMenu'));
		if(!redirect) {
			curSelected += huh;
		}
		else
		{
			curSelected = huh;
		}

		if(curSelected >= 0 && curSelected <= currGalleryTotal-1)
		{
			if(!contraToggle)
			{	descText.text = galleryDesc[curSelected];
				exhibits.visible = true;
				contraBand.visible = false;
			}
			else
			{
				descText.text = contrabandDesc[curSelected];
				exhibits.visible = false;
				contraBand.visible = true;
			}
			descText.updateHitbox();
			descText.screenCenter(X);
		}

		// update sprites
		//var loop:Int = 0;
		if(!contraToggle)
		{
			exhibits.forEach(function(spr:FlxSprite)
			{
				if (spr.ID == curSelected)
				{
					spr.visible = true;
					//galleryDescText[loop].visible = true;
					descBox.setPosition(descText.x-10, descText.y-10);
					descBox.setGraphicSize(Std.int(descText.width + 20), Std.int(descText.height + 20));
					descBox.updateHitbox();
				} else {
					spr.visible = false;
					//galleryDescText[loop].visible = false;
				}
				//loop++;
			});
		}
		else {
			contraBand.forEach(function(spr:FlxSprite)
				{
					if (spr.ID == curSelected)
					{
						spr.visible = true;
						//galleryDescText[loop].visible = true;
						descBox.setPosition(descText.x-10, descText.y-10);
						descBox.setGraphicSize(Std.int(descText.width + 20), Std.int(descText.height + 20));
						descBox.updateHitbox();
					} else {
						spr.visible = false;
						//galleryDescText[loop].visible = false;
					}
					//loop++;
				});
		}
	}
}
