#include<Andromeda/Andromeda.h>

using namespace AE;

class Sandbox2D : public Application{

public:
    Sandbox2D(){std::cout<<"Welcome to Andromeda Engine"<<std::endl;}
    ~Sandbox2D(){}

    void Update() override{
        string q;
        std::getline(std::cin,q);
        if(q == "q"){
            m_running = false;
        }
    }
private:
};

AE::Application* AE::createApplication(){
    return new Sandbox2D();
}