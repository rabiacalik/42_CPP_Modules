#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(){}

Base* Base::generate(void) {
    int randomNbr = rand() % 3;
    if (randomNbr == 0) {
        std::cout << "create : A\n";
        return (new A()); 
    }

    else if (randomNbr == 1) {
        std::cout << "create : B\n";
        return (new B());
    }

    else {
        std::cout << "create : C\n";
        return (new C());
    }
}

void Base::identify(Base& p){
    try{
        A& a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e) {}
    
    try{
        B& b = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)b;
    }
    catch(const std::exception& e) {}
    
    try{
        C& c = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)c;
    }
    catch(const std::exception& e) {} 
}

void Base::identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown type" << std::endl;
}
