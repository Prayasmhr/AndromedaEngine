#include"AEpch.h"
#include"Application.h"
#include"Log.h"

using namespace AE;

#ifdef ANDROMEDA_WINDOWS_SYSTEM

int main(int argc, char const *argv[])
{
    Core::log::Init();
    AE_CORE_INFO("Engine Intialized");
    Core::Application* app = Core::createApplication();
    while(app->isrunning()){
        app->Update();
    }

    delete app;
    return 0;
}

#endif