#ifndef APPLICATION_H
#define APPLICATION_H

#include<iostream>
#include"Core.h"

using std::string;

namespace AE{
    class ANDROMEDA_ENGINE_API Application{
    public:
        Application();
        virtual ~Application();

        inline bool isrunning() const{return m_running;}

        virtual void Update();
        virtual void Draw();
    protected:
        bool m_running;
        string m_title;
    };
    
    extern Application* createApplication();
}



#endif