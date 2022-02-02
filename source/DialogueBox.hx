package;

import flixel.system.FlxSound;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.addons.text.FlxTypeText;
import flixel.graphics.frames.FlxAtlasFrames;
import flixel.group.FlxSpriteGroup;
import flixel.input.FlxKeyManager;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import flixel.util.FlxTimer;

using StringTools;

class DialogueBox extends FlxSpriteGroup
{
	var box:FlxSprite;

	var curCharacter:String = '';
	var curPosition:String = '';
	var curEmote:String = '';

	var dialogue:Alphabet;
	var dialogueList:Array<String> = [];

	// SECOND DIALOGUE FOR THE PIXEL SHIT INSTEAD???
	var swagDialogue:FlxTypeText;

	var dropText:FlxText;

	public var finishThing:Void->Void;

	var portraitLeft:FlxSprite;
	var portraitRight:FlxSprite;

	var cutSceneBG:FlxSprite;

	var handSelect:FlxSprite;
	var bgFade:FlxSprite;

	var sound:FlxSound;
	var tempPortrait:FlxSprite;

	public function new(talkingRight:Bool = true, ?dialogueList:Array<String>)
	{
		super();

		// music switch
		// decides what song is playing during dialouge
		switch (PlayState.SONG.song.toLowerCase())
		{
			/*
			case 'senpai':
				sound = new FlxSound().loadEmbedded(Paths.music('Lunchbox'),true);
				sound.volume = 0;
				FlxG.sound.list.add(sound);
				sound.fadeIn(1, 0, 0.8);
			case 'thorns':
				sound = new FlxSound().loadEmbedded(Paths.music('LunchboxScary'),true);
				sound.volume = 0;
				FlxG.sound.list.add(sound);
				sound.fadeIn(1, 0, 0.8);
				*/
		}

		// add bg colour sprite
		bgFade = new FlxSprite(-200, -200).makeGraphic(Std.int(FlxG.width * 1.3), Std.int(FlxG.height * 1.3), 0xFFB3DFd8);
		bgFade.scrollFactor.set();
		bgFade.alpha = 0;
		add(bgFade);

		new FlxTimer().start(0.83, function(tmr:FlxTimer)
		{
			bgFade.alpha += (1 / 5) * 0.7;
			if (bgFade.alpha > 0.7)
				bgFade.alpha = 0.7;
		}, 5);

		// dialog box sprite
		box = new FlxSprite(-20, 45);
		
		var hasDialog = false;

		// does my stage have dialogue?
		// whats my UI elements if i do?
		switch (PlayState.SONG.song.toLowerCase())
		{
			case 'grappler' | 'imminence' | 'equivocation':
				hasDialog = true;
				box.frames = Paths.getSparrowAtlas('speech_bubble_talkingALT', 'shared');
				box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
				box.animation.addByPrefix('normal', 'speech bubble normal', 24, false);
				box.width = 200;
				box.height = 200;
				box.x = -90;
				box.y = 425;

				dropText = new FlxText(252, 477, Std.int(FlxG.width * 0.6), "", 32);
				dropText.font = 'Pixel Arial 11 Bold';
				dropText.color = 0xFF000000;

				swagDialogue = new FlxTypeText(250, 475, Std.int(FlxG.width * 0.6), "", 32);
				swagDialogue.font = 'Pixel Arial 11 Bold';
				swagDialogue.color = 0xFF000000;
				swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
			
		}
			
				
		

		this.dialogueList = dialogueList;
		//break if no dialogue
		if (!hasDialog)
			return;
			
		// setup
		cutSceneBG = new FlxSprite(0,0);
		add(cutSceneBG);
		cutSceneBG.visible = false;

		tempPortrait = new FlxSprite(0,0);
		add(tempPortrait); // tempPortrait
		tempPortrait.visible = false;

		box.animation.play('normalOpen');
		box.setGraphicSize(Std.int(box.width * PlayState.daPixelZoom * 0.9));
		box.updateHitbox();
		add(box);
		box.screenCenter(X);

		handSelect = new FlxSprite(FlxG.width * 0.9, FlxG.height * 0.9).loadGraphic(Paths.image('weeb/pixelUI/hand_textbox'));
		add(handSelect);
			
		//add(dropText); // copy of actual dialouge for drop shadow
		add(swagDialogue); // actual dialouge


	}

	var dialogueOpened:Bool = false;
	var dialogueStarted:Bool = false;

	override function update(elapsed:Float)
	{

		dropText.text = swagDialogue.text;

		// open the text box for first reading

		///RESTRUCTURE THIS
		// need it to open when the dialouge is actually present
		if (box.animation.curAnim != null)
		{
			if (box.animation.curAnim.name == 'normalOpen' && box.animation.curAnim.finished)
			{
				box.animation.play('normal');
				dialogueOpened = true;
			}
		}

		// if the dialouge box opens, start the dialogue
		if (dialogueOpened && !dialogueStarted)
		{
			startDialogue();
			dialogueStarted = true;
		}

		if (PlayerSettings.player1.controls.ACCEPT && dialogueStarted == true)
		{
				
			FlxG.sound.play(Paths.sound('clickText'), 0.8);

			//if (dialogueList[1] == null && dialogueList[0] != null) /// what?
			if (dialogueList[1] == null) // if the next bit of dialouge is null, end the dialoge
			{
				if (!isEnding)
				{
					isEnding = true;
					tempPortrait.visible = false;
					//cutSceneBG.visible = false;

					//fade out of background music thats hardcoded
					//lol
					/*
					if (PlayState.SONG.song.toLowerCase() == 'senpai' || PlayState.SONG.song.toLowerCase() == 'thorns')
						sound.fadeOut(2.2, 0);
					*/

					// fade out graphics
					new FlxTimer().start(0.1, function(tmr:FlxTimer)
					{
						box.alpha -= 1 / 10;
						bgFade.alpha -= 1 / 10;
						cutSceneBG.alpha -= 1 / 10;
						//portraitLeft.visible = false;
						//portraitRight.visible = false;
						
						swagDialogue.alpha -= 1 / 10;
						dropText.alpha = swagDialogue.alpha;
					}, 10);

					// wait a few moments before destroying the instance
					new FlxTimer().start(1.2, function(tmr:FlxTimer)
					{
						finishThing();
						kill();
					});
				}
			}
			else
			{
				// if the dialogue is not NULL,
				// delete the first character (which is the first ':')
				// use the startDialouge function to draw the text
				// repeat until not null
				dialogueList.remove(dialogueList[0]);
				startDialogue();
			}
		}
		
		super.update(elapsed);
	}

	var isEnding:Bool = false;

	/*
		TO DO LIST
		- add gf portrait to list of selectable portriats for each stage
		- add new tag to each dialouge line to specify which portait for that character
			- EX: :bf:angry: :bf:sad: :bf:scared: :bf:cocky:
		--- Done ---
		- fix positioning of all portraits
		- fix position of text box in scenes

		
	*/
	function startDialogue():Void
	{
		cleanDialog(); // sets curCharacter

		// staging and drawing portraits
		var portraitName:String = '' + curCharacter + ' ' + curEmote;
		tempPortrait.frames = Paths.getSparrowAtlas('Talk Sprites/' + portraitName, 'shared');
		tempPortrait.animation.addByPrefix('enter', portraitName, 24, false);
		tempPortrait.setGraphicSize(Std.int(tempPortrait.width * 1));
		tempPortrait.updateHitbox();
		tempPortrait.scrollFactor.set();

		switch(curPosition)
		{
			case 'r':
				tempPortrait.flipX = false;
				tempPortrait.setPosition(750, 150);
			case 'l':
				tempPortrait.flipX = true;
				tempPortrait.setPosition(200, 100); // this Y value should be changed lmaog?
		}

		tempPortrait.animation.play('enter');

		swagDialogue.resetText(dialogueList[0]); // pop the text off
		swagDialogue.start(0.04, true); // present

	}

	function cleanDialog():Void
	{
		// i've never seen it done this way, but i guess it works...
		//dialogueList[0] = dialogueList[0].substr(splits[4].length).trim();

		//split the name, pos, and emote from the dialouge

		// dialouge should be in this format:
		//	:character:position:emotion:dialouge blah blah blah
		// ex
		//	:BF:r:angry:My balls are itchy!

		//MAKE ROOM FOR CUTSCENE IMAGES

		var splits:Array<String> = dialogueList[0].split(":");
		FlxG.log.add("curr");
		FlxG.log.add(dialogueList[0]);

		// this works pretty decently
		if(splits[1] == 'SCENE')
			{
				//To Do:
					// hide portatis and textbox on a scene change
					// add room for sound effects
				cutSceneBG.loadGraphic(Paths.image('scenes/'+splits[2], 'weekCuz'));
				//cutSceneBG.setGraphicSize(FlxG.width);
				cutSceneBG.setGraphicSize(Std.int(cutSceneBG.width * 1)); // ??!
				dialogueList[0] = splits[2]; //temp for testing. also makes it not null
				cutSceneBG.visible = true;
				tempPortrait.visible = false;
				box.visible = false; //temp
			}
		else {
			// normal dialogue
			tempPortrait.visible = true;
			box.visible = true; // temp
			curCharacter = splits[1];
			curPosition = splits[2];
			curEmote = splits[3];
			
			dialogueList[0] = splits[4];
		}
	}

			// asset switch
		// what portraits am i using for the dialogue?
		// old lmao
		/*
		trace("portrait switch");
		switch (PlayState.SONG.song.toLowerCase()) 
			case 'grappler' :
				{
				//cuz
				
				portraitLeft.frames = Paths.getSparrowAtlas('Talk Sprites/Cuz Default', 'shared');
				portraitLeft.animation.addByPrefix('enter', 'Cuz Default', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.15));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;

				//bf
				portraitRight = new FlxSprite(750, 200);
				portraitRight.frames = Paths.getSparrowAtlas('Talk Sprites/BF Default', 'shared');
				portraitRight.animation.addByPrefix('enter', 'BF Default', 24, false);
				portraitRight.setGraphicSize(Std.int(portraitRight.width * PlayState.daPixelZoom * 0.15));
				portraitRight.updateHitbox();
				portraitRight.scrollFactor.set();
				add(portraitRight);
				portraitRight.visible = false;

				dropText = new FlxText(252, 477, Std.int(FlxG.width * 0.6), "", 32);
				dropText.font = 'Pixel Arial 11 Bold';
				dropText.color = 0xFF000000;

				swagDialogue = new FlxTypeText(250, 475, Std.int(FlxG.width * 0.6), "", 32);
				swagDialogue.font = 'Pixel Arial 11 Bold';
				swagDialogue.color = 0xFF000000;
				swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
				}
			case 'imminence':
				{
				//cuz
				portraitLeft = new FlxSprite(200, 150);
				portraitLeft.frames = Paths.getSparrowAtlas('Talk Sprites/Cuz Ticked Off', 'shared');
				portraitLeft.animation.addByPrefix('enter', 'Cuz Cuz Ticked Off', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.15));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;

				//bf
				portraitRight = new FlxSprite(750, 200);
				portraitRight.frames = Paths.getSparrowAtlas('Talk Sprites/BF Mad', 'shared');
				portraitRight.animation.addByPrefix('enter', 'BF Mad', 24, false);
				portraitRight.setGraphicSize(Std.int(portraitRight.width * PlayState.daPixelZoom * 0.15));
				portraitRight.updateHitbox();
				portraitRight.scrollFactor.set();
				add(portraitRight);
				portraitRight.visible = false;

				dropText = new FlxText(252, 477, Std.int(FlxG.width * 0.6), "", 32);
				dropText.font = 'Pixel Arial 11 Bold';
				dropText.color = 0xFF000000;

				swagDialogue = new FlxTypeText(250, 475, Std.int(FlxG.width * 0.6), "", 32);
				swagDialogue.font = 'Pixel Arial 11 Bold';
				swagDialogue.color = 0xFF000000;
				swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
				}
			case 'equivocation':
				{
				//cuz
				portraitLeft = new FlxSprite(200, 150);
				portraitLeft.frames = Paths.getSparrowAtlas('Talk Sprites/Cuz Angry', 'shared');
				portraitLeft.animation.addByPrefix('enter', 'Cuz Angry', 24, false);
				portraitLeft.setGraphicSize(Std.int(portraitLeft.width * PlayState.daPixelZoom * 0.15));
				portraitLeft.updateHitbox();
				portraitLeft.scrollFactor.set();
				add(portraitLeft);
				portraitLeft.visible = false;

				//gf
				
				portraitRight.frames = Paths.getSparrowAtlas('Talk Sprites/GF Smug Demon', 'shared');
				portraitRight.animation.addByPrefix('enter', 'GF Smug Demon', 24, false);
				portraitRight.setGraphicSize(Std.int(portraitRight.width * PlayState.daPixelZoom * 0.15));
				portraitRight.updateHitbox();
				portraitRight.scrollFactor.set();
				add(portraitRight);
				portraitRight.visible = false;

				dropText = new FlxText(252, 477, Std.int(FlxG.width * 0.6), "", 32);
				dropText.font = 'Pixel Arial 11 Bold';
				dropText.color = 0xFF000000;

				swagDialogue = new FlxTypeText(250, 475, Std.int(FlxG.width * 0.6), "", 32);
				swagDialogue.font = 'Pixel Arial 11 Bold';
				swagDialogue.color = 0xFF000000;
				swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];
				}
			
		}*/
}
