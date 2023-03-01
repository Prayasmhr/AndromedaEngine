#include<Andromeda/Andromeda.h>

using namespace AE::Core;

class Sandbox2D : public Application{

public:
    Sandbox2D(){std::cout<<"Welcome to Andromeda Engine"<<std::endl;}
    ~Sandbox2D(){}

    void Update() override{
        
    }
private:
};

AE::Core::Application* AE::Core::createApplication(){
    return new Sandbox2D();
}