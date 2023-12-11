project "Core"
   kind "ConsoleApp"
   language "C++"
   cppdialect "C++20"
   staticruntime "off"

   files 
   { 
	"Source/**.h", 
	"Source/**.cpp" 
   }

   includedirs
   {
      "Source",
	  "Source/SDL2/include",
	  "Source/SDL2_image/include",
	  "Source/SDL2_mixer/include",
	  "Source/SDL2_ttf/include"
   }
   
	outputdir = "%{cfg.buildcfg}-%{cfg.system}-%{cfg.architecture}"
   targetdir ("../Binaries/" .. outputdir .. "/%{prj.name}")
   objdir ("../Binaries/Intermediates/" .. outputdir .. "/%{prj.name}")

   filter "system:windows"
       systemversion "latest"
       defines { }
		links {
			         "setupapi",
			         "winmm",
			         "imm32",
			         "version",
					 "SDL2.lib",
					 "SDL2main.lib",
					 "SDL2_image.lib",
					 "SDL2_mixer.lib",
					 "SDL2_ttf.lib"
		}
		libdirs
		{
			"Source/SDL2/lib/x64",
			"Source/SDL2_image/lib/x64",
			"Source/SDL2_mixer/lib/x64",
			"Source/SDL2_ttf/lib/x64"
		}
		--prebuildcommands
		--{
		--	("{COPYFILE} Core/Source/SDL2/lib/x64/SDL2.dll %{cfg.buildtarget.relpath}")
		--}
   filter "configurations:Debug"
       defines { "DEBUG" }
       runtime "Debug"
       symbols "On"

   filter "configurations:Release"
       defines { "RELEASE" }
       runtime "Release"
       optimize "On"
       symbols "On"

   filter "configurations:Dist"
       defines { "DIST" }
       runtime "Release"
       optimize "On"
       symbols "Off"
	   
	