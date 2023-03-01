workspace "Andromeda"
   configurations { "Debug", "Release" }
project "Andromeda"
   kind "SharedLib"
   language "C++"
   targetdir "bin/%{cfg.buildcfg}"

   files { "src/**.cpp", "include/Andromeda/**.h" }
   includedirs { "include" ,"C:/Users/Prayas Meher/Andromeda/vendor/spdlog/include"}

   filter "configurations:Debug"
      symbols "On"

   filter "configurations:Release"
      optimize "On"

   

   filter { "system:windows" }
      defines { "ANDROMEDA_WINDOWS_SYSTEM" }
      defines { "ANDROMEDA_BUILD" }
