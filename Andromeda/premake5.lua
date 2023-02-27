workspace "Andromeda"
   configurations { "Debug", "Release" }
project "Andromeda"
   kind "SharedLib"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "src/**.cpp", "include/**.h" }
   includedirs { "include" }

   filter "configurations:Debug"
      symbols "On"

   filter "configurations:Release"
      optimize "On"

   filter { "system:windows" }
      defines { "_WIN32" }
      defines { "ANDROMEDA_BUILD" }
