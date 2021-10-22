project "libtiff"
  kind "StaticLib"
  language "C++"
  staticruntime "On"
  warnings "Off"

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
    -- "libtiff/tif_unix.c",
    "libtiff/tif_wince.c",
    "libtiff/tif_vms.c",
    -- "libtiff/tif_win32.c"
  }
  
  filter { "configurations:Debug" }
    optimize "Debug"
    symbols "On"
  
  filter { "configurations:Release" }
    optimize "Full"
  
  filter { "system:windows or uwp" }
    defines { "_CRT_SECURE_NO_WARNINGS" }
    excludes { "libtiff/tif_unix.c" }
  
  filter { "system:not windows", "system:not uwp" }
    excludes { "libtiff/tif_win32.c" }

  filter { "system:uwp" }
    staticruntime "Off"
  
  targetdir "../../builds"
