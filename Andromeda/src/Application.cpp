#include<Andromeda/Application.h>

namespace AE::Core{
    Application::Application(string p_title){
        m_running = true;
        m_title = p_title;
        AE_CLIENT_INFO("Sandbox Initialized");
    }

    Application::~Application(){}

    void Application::Update(){}
    void Application::Draw(){}
}