#include<iostream>
using namespace std; 

class Greet{
    public:
    void outMethod(); // Declaration is important
};

void Greet::outMethod()
{
    cout << "hello and Good Morning.";
}


int main()
{
    Greet obj1;
    obj1.outMethod();
}