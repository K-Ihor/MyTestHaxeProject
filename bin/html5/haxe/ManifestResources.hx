package;

import haxe.io.Bytes;
import lime.utils.AssetBundle;
import lime.utils.AssetLibrary;
import lime.utils.AssetManifest;
import lime.utils.Assets;

#if sys
import sys.FileSystem;
#end

#if disable_preloader_assets
@:dox(hide) class ManifestResources {
	public static var preloadLibraries:Array<Dynamic>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;

	public static function init (config:Dynamic):Void {
		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();
	}
}
#else
@:access(lime.utils.Assets)


@:keep @:dox(hide) class ManifestResources {


	public static var preloadLibraries:Array<AssetLibrary>;
	public static var preloadLibraryNames:Array<String>;
	public static var rootPath:String;


	public static function init (config:Dynamic):Void {

		preloadLibraries = new Array ();
		preloadLibraryNames = new Array ();

		rootPath = null;

		if (config != null && Reflect.hasField (config, "rootPath")) {

			rootPath = Reflect.field (config, "rootPath");

			if(!StringTools.endsWith (rootPath, "/")) {

				rootPath += "/";

			}

		}

		if (rootPath == null) {

			#if (ios || tvos || emscripten)
			rootPath = "assets/";
			#elseif android
			rootPath = "";
			#elseif console
			rootPath = lime.system.System.applicationDirectory;
			#else
			rootPath = "./";
			#end

		}

		#if (openfl && !flash && !display)
		
		#end

		var data, manifest, library, bundle;

		#if kha

		null
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("null", library);

		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("null");

		#else

		data = '{"name":null,"assets":"aoy4:pathy22:assets%2Fmain-view.xmly4:sizei5050y4:typey4:TEXTy2:idR1y7:preloadtgoR0y20:assets%2FMyFile1.txtR2i3177R3R4R5R7R6tgoR0y20:assets%2FMyFile2.txtR2i3564R3R4R5R8R6tgoR0y20:assets%2FMyFile3.txtR2i286R3R4R5R9R6tgoR0y19:assets%2Fopenfl.svgR2i62864R3R4R5R10R6tgh","rootPath":null,"version":2,"libraryArgs":[],"libraryType":null}';
		manifest = AssetManifest.parse (data, rootPath);
		library = AssetLibrary.fromManifest (manifest);
		Assets.registerLibrary ("default", library);
		

		library = Assets.getLibrary ("default");
		if (library != null) preloadLibraries.push (library);
		else preloadLibraryNames.push ("default");
		

		#end

	}


}


#if kha

null

#else

#if !display
#if flash

@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_main_view_xml extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_myfile1_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_myfile2_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_myfile3_txt extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__assets_openfl_svg extends null { }
@:keep @:bind @:noCompletion #if display private #end class __ASSET__manifest_default_json extends null { }


#elseif (desktop || cpp)

@:keep @:file("assets/main-view.xml") @:noCompletion #if display private #end class __ASSET__assets_main_view_xml extends haxe.io.Bytes {}
@:keep @:file("assets/MyFile1.txt") @:noCompletion #if display private #end class __ASSET__assets_myfile1_txt extends haxe.io.Bytes {}
@:keep @:file("assets/MyFile2.txt") @:noCompletion #if display private #end class __ASSET__assets_myfile2_txt extends haxe.io.Bytes {}
@:keep @:file("assets/MyFile3.txt") @:noCompletion #if display private #end class __ASSET__assets_myfile3_txt extends haxe.io.Bytes {}
@:keep @:file("assets/openfl.svg") @:noCompletion #if display private #end class __ASSET__assets_openfl_svg extends haxe.io.Bytes {}
@:keep @:file("") @:noCompletion #if display private #end class __ASSET__manifest_default_json extends haxe.io.Bytes {}



#else



#end

#if (openfl && !flash)

#if html5

#else

#end

#end
#end

#end

#end