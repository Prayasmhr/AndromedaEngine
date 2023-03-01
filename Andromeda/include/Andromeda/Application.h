#ifndef APPLICATION_H
#define APPLICATION_H

#include<iostream>
#include"Core.h"
#include"Log.h"

using std::string;

namespace AE{namespace Core{
    class ANDROMEDA_ENGINE_API Application{
    public:
        Application(string p_title);
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
}


#endif