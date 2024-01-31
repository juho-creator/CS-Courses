#include <iostream>
using namespace std;


class Base {
    public:
        // Virtual function : Enables polymorphism (overriding of inherited methods) 
        virtual void display() {
            std::cout << "Base class display function" << std::endl;
        }
};

class Derived : public Base {
    public:
        void display() {
            std::cout << "Derived class display function" << std::endl;
        }
};


int main()
{
    Base* basePtr = new Derived();
    basePtr->display();  // Calls Base class display at compile-time
}