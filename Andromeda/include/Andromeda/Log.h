#ifndef LOG_H
#define LOG_H


#include<iostream>
#include<spdlog/spdlog.h>
#include"Core.h"

namespace AE{namespace Core{

class ANDROMEDA_ENGINE_API log{
public:
    static void Init();

    inline static std::shared_ptr<spdlog::logger> getClientlogger(){return s_clientlogger;}
    inline static std::shared_ptr<spdlog::logger> getCorelogger(){return s_corelogger;}
private:
    static std::shared_ptr<spdlog::logger> s_corelogger;
    static std::shared_ptr<spdlog::logger> s_clientlogger;
    
};
}
}
#endif

//core
#define AE_CORE_WARN(...)  ::AE::Core::log::getCorelogger()->critical(__VA_ARGS__) 
#define AE_CORE_INFO(...)  ::AE::Core::log::getCorelogger()->info(__VA_ARGS__)
#define AE_CORE_ERROR(...)    ::AE::Core::log::getCorelogger()->error(__VA_ARGS__)
#define AE_CORE_CRITICAL(...) ::AE::Core::log::getCorelogger()->critical(__VA_ARGS__)
#define AE_CORE_TRACE(...)    ::AE::Core::log::getCorelogger()->trace(__VA_ARGS__)

//client
#define AE_CLIENT_WARN(...)     ::AE::Core::log::getClientlogger()->warn(__VA_ARGS__)
#define AE_CLIENT_INFO(...)     ::AE::Core::log::getClientlogger()->info(__VA_ARGS__)
#define AE_CLIENT_ERROR(...)    ::AE::Core::log::getClientlogger()->error(__VA_ARGS__)
#define AE_CLIENT_CRITICAL(...) ::AE::Core::log::getClientlogger()->critical(__VA_ARGS__)
#define AE_CLIENT_TRACE(...)    ::AE::Core::log::getClientlogger()->trace(__VA_ARGS__)