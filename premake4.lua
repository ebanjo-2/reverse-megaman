solution "game"

	language "C++"
	buildoptions "-std=c++11"
    configurations { "debug - windows","debug - linux", "release - windows", "release - linux" }

    project "reverse_megaman"

        kind "ConsoleApp"
        files { "src/**.*" }
		includedirs { "src", "engine/undicht/core/include","engine/undicht/engine/src", "engine/undicht/vendor", "engine/undicht/vendor/glm" }
		
		configuration "debug - windows"
			links { "engine/undicht/core/libcore.a", "engine/undicht/engine/libengine.a" }
		
		configuration "debug - linux"
			links { "dl" }
			links { "engine/undicht/core/libcore.so", "engine/undicht/engine/libengine.so" }
			
		configuration "release - linux"
			links { "dl" }
			links { "engine/undicht/core/libcore.so", "engine/undicht/engine/libengine.so" }
			

        
