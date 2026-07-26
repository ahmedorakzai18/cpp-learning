#include<iostream>
#include<string>
using namespace std; 

class Scooter  // base class (parent)
{
    public:
    string name; 
    int milage; 
}; 

class Bike : public Scooter  // derived class (child)
{
    public:
    int gears;
};

int main()
{
    Bike b1; 
    b1.name = "Ninja"; 
    b1.gears = 4; 
    b1.milage = 28; 

    cout << b1.name << endl; 
    cout << b1.gears << endl; 
    cout << b1.milage << endl; 
}