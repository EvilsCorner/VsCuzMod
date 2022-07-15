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
	public var exhibits = new FlxTypedGroup<FlxSprite>();
	var exhibitTotal = 24;
	public var contraBand = new FlxTypedGroup<FlxSprite>();
	var contraBandTotal = 11;
	var currGalleryTotal = 0;

	var showContraband:Bool = false;
	var subMenu:Bool = true;
	var subGallery:FlxSprite;
	var subContra:FlxSprite;

	public var acceptInput:Bool = true;

	var consoleBox:FlxSprite;
	var descBox:FlxSprite;
	var scaleHelper:Int;

	var titleText:FlxText;
	var leftArrow:FlxSprite;
	var rightArrow:FlxSprite;
	var ui_tex = Paths.getSparrowAtlas('campaign_menu_UI_assets');

	var menuBG:FlxSprite;

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
		'Them Flustered'
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
										"[ARROWS] - Change item     "
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

		//toggle off until select a gallery:
		instruct1.visible = false;
		leftArrow.visible = false;
		rightArrow.visible = false;
		descText.visible = false;
		exhibits.visible = false;

		/*
		subGallery = new FlxText(0, FlxG.height*4/8 -150, "Gallery", 96);
		subGallery.setFormat(Paths.font("Dominican.TTF"), 96, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		subGallery.screenCenter(X);
		*/
		subGallery = new FlxSprite(0, FlxG.height*4/8 -200);
		subGallery.frames = Paths.getSparrowAtlas('mainmenu/menu_gallery');
		subGallery.animation.addByPrefix('idle',"gallery basic", 24);
		subGallery.animation.addByPrefix('selected', "gallery white", 24);
		subGallery.animation.play('idle');
		
		add(subGallery);
		subGallery.updateHitbox();
		subGallery.screenCenter(X);

		/*
		subContra = new FlxText(0, FlxG.height*4/8 , "Contraband", 96);
		subContra.setFormat(Paths.font("Dominican.TTF"), 96, FlxColor.RED, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		subContra.screenCenter(X);
		subContra.alpha = 0.3;
		*/
		subContra =  new FlxSprite(0, FlxG.height*4/8);
		subContra.frames = Paths.getSparrowAtlas('mainmenu/GalleryContraband');
		subContra.animation.addByPrefix('idle', "contraband_basic", 24);
		subContra.animation.addByPrefix('selected', "contraband_selected", 24);
		subContra.animation.play('idle');
		subContra.alpha = 0.7;
		
		add(subContra);
		subContra.updateHitbox();
		subContra.screenCenter(X);

		super.create();
	}

	

	override function update(elapsed:Float)
	{

		if(!showContraband || subMenu){
			currGalleryTotal = exhibitTotal;
			menuBG.color = FlxColor.WHITE;
		}
		else{
			currGalleryTotal = contraBandTotal;
			menuBG.color = FlxColor.RED;
		}

		if(curSelected == -1)
			changeItem(1);

		if(subMenu)
		{
			leftArrow.visible = false;
			rightArrow.visible = false;
			descBox.visible = false;
			descText.visible = false;
			exhibits.visible = false;
			contraBand.visible = false;
			titleText.visible = false;
			currGalleryTotal = 2;
		}
		else
		{
			leftArrow.visible = true;
			rightArrow.visible = true;
			descBox.visible = true;
			descText.visible = true;
			titleText.visible = true;

			if(!subMenu) {
				// animation
				if (controls.UI_RIGHT)
					rightArrow.animation.play('press')
				else
					rightArrow.animation.play('idle');

				if (controls.UI_LEFT)
					leftArrow.animation.play('press');
				else
					leftArrow.animation.play('idle');

				if(!showContraband)
					titleText.text = 'Gallery   ' + (curSelected+1) + '/' + (currGalleryTotal);
				else
					titleText.text = 'Contraband   ' + (curSelected+1) + '/' + (currGalleryTotal);
			}
		}

		if (acceptInput)
		{
			// 0 is the first option
			if(FlxG.keys.justPressed.LEFT || FlxG.keys.justPressed.DOWN)
			{
				if (curSelected > 0) 
				{
					changeItem(-1);
				} else {
					changeItem(currGalleryTotal-1, true);
				}
			}
			if(FlxG.keys.justPressed.RIGHT || FlxG.keys.justPressed.UP)
			{
				if (curSelected < currGalleryTotal-1) 
				{
					changeItem(1);
				} else {
					changeItem(0,true);
				}
			}

			if (controls.BACK)
			{
				if(subMenu)
					FlxG.switchState(new MainMenuState());
				else {
					// back to submenu
					subMenu = true;
					FlxG.sound.play(Paths.sound('scrollMenu'));
					changeItem(0,true);
				}
			}
			if (controls.ACCEPT)
			{
				//select a gallery
				if(subMenu) {
					FlxG.sound.play(Paths.sound('scrollMenu'));
					subMenu = false;
					if(curSelected == 0)
						showContraband = false;
					else
						showContraband = true;
					changeItem(0,true);
				}
			}
			var gamepad:FlxGamepad = FlxG.gamepads.lastActive;
		}

		//what the fuck
		subGallery.updateHitbox();
		subGallery.screenCenter(X);
		subContra.updateHitbox();
		subContra.screenCenter(X);

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
			if(subMenu)
			{
				if(curSelected == 0) {
					subContra.animation.play('idle'); 
					subContra.alpha = 0.7; 
					subGallery.animation.play('selected'); 
					subGallery.alpha = 1.0;
					subGallery.centerOffsets();
				}
				else {
					subContra.animation.play('selected'); 
					subContra.alpha = 1.0; 
					subGallery.animation.play('idle'); 
					subGallery.alpha = 0.7;
					subContra.centerOffsets();
				}
			}
			else 
			{
				subContra.alpha = 0; 
				subGallery.alpha = 0;
				if(!showContraband)
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

		}

		// update sprites
		//var loop:Int = 0;
		if(!showContraband)
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
