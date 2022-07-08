package;

import flixel.FlxG;
import flixel.util.FlxSave;

class Unlockables {
	public static var gallery:Bool = false;
	public static var song4:Bool = false;

	public static function saveUnlocks() {
		FlxG.save.data.gallery = gallery;
		FlxG.save.data.song4 = song4;

		FlxG.save.flush();

		//var save:FlxSave = new FlxSave();
		//save.bind('controls_v2', 'ninjamuffin99'); //Placing this in a separate save so that it can be manually deleted without removing your Score and stuff
		//save.data.customControls = keyBinds;
		//save.flush();
		//FlxG.log.add("Settings saved!");
	}

	public static function loadUnlocks() {
		if(FlxG.save.data.gallery != null) {
			gallery = FlxG.save.data.gallery;
		}
		if(FlxG.save.data.song4 != null) {
			song4 = FlxG.save.data.song4;
		}
	}

}
