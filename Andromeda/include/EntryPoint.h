#include"Application.h"

using namespace AE;

#ifdef _WIN32

int main(int argc, char const *argv[])
{
    Application* app = createApplication();
    
    while(app->isrunning()){
        app->Update();
    }

    delete app;
    return 0;
}

#endif