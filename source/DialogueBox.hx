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
import flixel.tweens.FlxEase;
import flixel.tweens.FlxTween;

using StringTools;

class DialogueBox extends FlxSpriteGroup
{
	var box:FlxSprite;

	var curCharacter:String = '';
	var prevCharacter:String = '';
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
	
	var isEnding:Bool = false;
	var noAdvance:Bool = false;
	var doublePop:Bool = false;

	var instruct:FlxText;

	public function new(talkingRight:Bool = true, ?dialogueList:Array<String>)
	{
		super();

		// music switch
		// decides what song is playing during dialouge
		sound = new FlxSound();
		switch (PlayState.SONG.song.toLowerCase())
		{
			
			case 'grappler':
				sound.loadEmbedded(Paths.sound('bfgf'),true);
				sound.volume = 0;
				FlxG.sound.list.add(sound);
				new FlxTimer().start(1, function(timer) 
				{
					sound.fadeIn(0.1, 0, 0.8);
				});
			case 'exertion':
				sound.loadEmbedded(Paths.sound('parkAmbience'),true);
				sound.volume = 0;
				FlxG.sound.list.add(sound);
				sound.fadeIn(1, 0, 0.8);
				
		}

		// add bg colour sprite
		bgFade = new FlxSprite(-200, -200).makeGraphic(Std.int(FlxG.width * 1.3), Std.int(FlxG.height * 1.3), 0xFFB3DFd8);
		bgFade.scrollFactor.set();
		bgFade.alpha = 0;
		// add(bgFade);
		/*
		new FlxTimer().start(0.83, function(tmr:FlxTimer)
		{
			bgFade.alpha += (1 / 5) * 0.7;
			if (bgFade.alpha > 0.7)
				bgFade.alpha = 0.7;
		}, 5);
		*/

		// dialog box sprite
		box = new FlxSprite(0, 395);
		
		var hasDialog = false;
		hasDialog = true;
		///lmaog

		// whats my UI elements
		box.frames = Paths.getSparrowAtlas('speech_bubble_talkingALT', 'shared');
		box.animation.addByPrefix('normalOpen', 'Speech Bubble Normal Open', 24, false);
		box.animation.addByPrefix('normal', 'speech bubble normal', 24, true);

		swagDialogue = new FlxTypeText(200, 465, Std.int(FlxG.width * 0.7), "", 32);
		swagDialogue.setFormat(Paths.font("Dom Casual.TTF"), 60);
		swagDialogue.color = 0xFF000000;
		swagDialogue.sounds = [FlxG.sound.load(Paths.sound('pixelText'), 0.6)];

		dropText = new FlxText(swagDialogue.x+2, swagDialogue.y+2, Std.int(FlxG.width * 0.6), "", 32);
		dropText.setFormat(Paths.font("Dom Casual.TTF"), 60);
		dropText.color = 0xFF000000;
		
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

		box.setGraphicSize(Std.int(box.width * 0.825),Std.int(box.height * 0.9));
		box.updateHitbox();
		box.screenCenter(X);
		box.x += 25;
		//box.animation.play('normal'); // temp!!! remove when open animation is fixed
		add(box);
		box.visible = false;

		//handSelect = new FlxSprite(FlxG.width * 0.9, FlxG.height * 0.9).loadGraphic(Paths.image('weeb/pixelUI/hand_textbox'));
		//add(handSelect);
			
		//add(dropText); // copy of actual dialouge for drop shadow
		add(swagDialogue); // actual dialouge
		
		instruct = new FlxText(FlxG.width*7/8-50, FlxG.height*15/16, 0, '[ESC] to Skip' , 24);
		instruct.alpha = 0;
		instruct.setFormat("VCR OSD Mono", 24, FlxColor.WHITE, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		add(instruct);

		new FlxTimer().start(5, function(timer) 
		{
			FlxTween.tween(instruct, {alpha: 1}, 0.4, {ease: FlxEase.quadIn});
		});

	}

	var dialogueOpened:Bool = false;
	var dialogueStarted:Bool = false;
	var tempBool:Bool = true;

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
				tempBool = true;
			}
		}
		

		// if the dialouge box opens, start the dialogue
		if (!dialogueStarted)
		{
			startDialogue();
			dialogueStarted = true;
		}

		if (FlxG.keys.justPressed.ESCAPE && dialogueStarted)
			isEnding = true;


		if (PlayerSettings.player1.controls.ACCEPT && dialogueStarted && !noAdvance)
		{
				
			FlxG.sound.play(Paths.sound('SNAP'), 0.8);

			//if (dialogueList[1] == null && dialogueList[0] != null) /// what?
			if (dialogueList[1] == null) // if the next bit of dialouge is null, end the dialoge
			{
				isEnding = true;
			}
			else
			{

					
				// if the dialogue is not NULL,
				// delete the first character (which is the first ':')
				// use the startDialouge function to draw the text
				// repeat until not null
				dialogueList.remove(dialogueList[0]);
				if(doublePop) dialogueList.remove(dialogueList[0]); doublePop = false;
				startDialogue();
			}

		}
		if (isEnding)
		{
			isEnding = false; // run this code more than once at your peril
			noAdvance = true;

			tempPortrait.visible = false;
			//cutSceneBG.visible = false;

			//fade out of background music
			if (sound != null) sound.fadeOut(2.2, 0);
			

			// fade out graphics
			new FlxTimer().start(0.01, function(tmr:FlxTimer)
			{
				box.alpha -= 1 / 100;
				//bgFade.alpha -= 1 / 10;
				cutSceneBG.alpha -= 1 / 100;
				//portraitLeft.visible = false;
				//portraitRight.visible = false;
				
				swagDialogue.alpha -= 1 / 100;
				dropText.alpha = swagDialogue.alpha;
			}, 100);
			
			/*
			if (PlayState.SONG.song.toLowerCase() == 'song4') 
			{
				new FlxTimer().start(1, 
				function(tmr:FlxTimer)
				{
					PlayState.Stage.swagBacks['Hill'].visible = false; // bastard
					PlayState.Stage.swagBacks['Hell'].visible = true;
					FlxG.camera.flash(FlxColor.RED, 2);
				});
			}
			*/

			// wait a few moments before destroying the instance
			new FlxTimer().start(1.2, function(tmr:FlxTimer)
			{
				finishThing(); // you can pass a function here, whatever you want.
				kill();
			});
		}
		if(dialogueOpened && !isEnding && tempBool) {
			swagDialogue.start(0.04, true); // present
			tempBool = false;
		}
		super.update(elapsed);
	}

	function startDialogue():Void
	{
		cleanDialog(); // sets curCharacter

		// staging and drawing portraits
		var portraitName:String = '' + curCharacter + ' ' + curEmote;
		tempPortrait.frames = Paths.getSparrowAtlas('Talk Sprites/' + portraitName, 'shared');
		if(tempPortrait.frames == null)
		{
			tempPortrait.frames = Paths.getSparrowAtlas('Talk Sprites/' + curCharacter + ' Unknown', 'shared');
			trace("portrait " + portraitName + " was not found");
		}
		tempPortrait.animation.addByPrefix('enter', portraitName, 24, false);
		tempPortrait.setGraphicSize(Std.int(tempPortrait.width * 1));
		tempPortrait.updateHitbox();
		tempPortrait.scrollFactor.set();

		switch(curPosition)
		{
			case 'r':
				tempPortrait.flipX = false;
				tempPortrait.setPosition(675, -65);
				box.flipX = false;
			case 'l':
				tempPortrait.flipX = true;
				tempPortrait.setPosition(80, -65); // this Y value should be changed lmaog?
				box.flipX = true;
		}
		if(curCharacter != prevCharacter){
			box.animation.play('normalOpen');
			// not yet!
			tempPortrait.animation.play('enter');
		}
		else{
			tempBool = true;
		}
		swagDialogue.resetText(dialogueList[0]); // pop the text off

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
		var future:Array<String> = dialogueList[1].split(":");
		FlxG.log.add("curr");
		FlxG.log.add(dialogueList[0]);

		if(future[1] == 'MUSIC')
		{
			doublePop = true;
			if(sound != null) sound.destroy();
			try { 
				sound.loadEmbedded(Paths.sound(future[2]),true);
				sound.play();
			}
			catch(e) {
				// no sound found :(
				trace(e.message);
				FlxG.log.add(e.message);
			}
		}

		// this works pretty decently
		if(splits[1] == 'SCENE')
		{
			try { 
				cutSceneBG.loadGraphic(Paths.image('scenes/'+splits[2], 'weekCuz'));
				cutSceneBG.setGraphicSize(Std.int(cutSceneBG.width * 1)); // ??!
				cutSceneBG.visible = true;
			}
			catch(e) {
				// no scene found :(
				trace(e.message);
				FlxG.log.add(e.message);
				cutSceneBG.visible = false;
			}

			dialogueList[0] = ' '; // makes it not null
			tempPortrait.visible = false;
			box.visible = false;
			prevCharacter = ''; // reset so box opens again

			// name of sound effect
			//trace("splits[3] =" + splits[3]);
			if(splits[3] != null) {
				var sound_ = new FlxSound().loadEmbedded(Paths.sound(splits[3]));
				sound_.play();
				//trace("sound = " + sound);
				//trace("path = " + Paths.sound(splits[3]));
				
			}
			// transition
			// format:
			// SCENE:1:sound:flash:0xFFFFFFFF:1.0
			// example with no sound
			// SCENE:1::fade:0xFF000000:1.0:in 

			///this works, but all the effects are BEHIND the fucking cutscene sprite
			/// how tf did this layering issue happen??
			/// why are the camera effects behind everything in this damn class?
			//// DONT USE FlxG.camera (non plural) FOR EFFECTS!
			//// WORST MISTAKE OF MY LIFE!!!!!
			if(splits[4] != null) {
				var data:FlxColor = new FlxColor(FlxColor.fromString(splits[5]));
				var time:Float = Std.parseFloat(splits[6]);
				//trace("colour = " + colour);
				//trace("time = " + time);
				switch(splits[4]){
					case 'flash':
					{
						//trace("---in flash");
						FlxG.cameras.flash(data, time);
					}

					case 'fade':
					{
						//trace("---in fade");
						var type = splits[7];
						var fade = false;
							switch(type){
								case 'in':
									fade = true;
								case 'out':
									fade = false;
							}
						FlxG.cameras.fade(data, time, fade);
					}
					case 'shake':
					{
						//nfg
						FlxG.cameras.shake(data, time);
					}
				}
			}
		}
		else {
			// normal dialogue
			tempPortrait.visible = true;
			box.visible = true; // temp
			prevCharacter = curCharacter;
			curCharacter = splits[1];
			curPosition = splits[2];
			curEmote = splits[3];
			//sound
			if(splits[5] != null) {
				FlxG.sound.play(Paths.sound(splits[5]), 0.8);
			}
			
			dialogueList[0] = splits[4]; // pass actual dialogue
		}
	}
}
