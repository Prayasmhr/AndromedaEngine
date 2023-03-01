#include <Andromeda/Log.h>
#include<spdlog/sinks/stdout_color_sinks.h>
#include<spdlog/sinks/ansicolor_sink.h>

namespace AE::Core{
    std::shared_ptr<spdlog::logger> log::s_corelogger;
    std::shared_ptr<spdlog::logger> log::s_clientlogger;

    void log::Init(){
        spdlog::set_pattern("%^[%T] %n: %v");
        s_corelogger = spdlog::stdout_color_mt("ANDROMEDA");
        s_clientlogger = spdlog::stdout_color_mt("Sandbox");
        s_corelogger->set_level(spdlog::level::trace);
        s_clientlogger->set_level(spdlog::level::trace);
    }
}