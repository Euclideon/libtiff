project "libtiff"
	kind "StaticLib"
	language "C++"
	staticruntime "On"
	tags { "libtiff-project" }

	files 
	{
	  "project.lua",
	  "libtiff/**.c",
	  "libtiff/**.h" 
	}
	
    excludes
	{
      "libtiff/mkg3states.c",
      "libtiff/mkspans.c",
      "libtiff/tif_acorn.c",
      "libtiff/tif_atari.c",
      "libtiff/tif_apple.c",
      "libtiff/tif_msdos.c",
      "libtiff/tif_unix.c",
      "libtiff/tif_vms.c",
      "libtiff/tif_wince.c",
      "libtiff/tif_win3.c",
      "libtiff/tif_win32.c"
    }

	includedirs {  }

	filter { "system:windows" }

	filter { "system:linux" }

	filter { }

	targetdir "../../builds"