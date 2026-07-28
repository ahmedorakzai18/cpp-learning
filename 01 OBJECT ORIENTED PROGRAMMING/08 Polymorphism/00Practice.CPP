#include<iostream>
using namespace std; 

class Vehicle
{
    public:
    virtual void VehicleSound()
    {
        cout << "A Vehicle makes some Noise"; 
    }
}; 

class Car: public Vehicle
{
    public:
    void VehicleSound()
    {
        cout << "A car Zoommmmmmmmmm\n"; 
    }
}; 

class Bike: public Vehicle
{
    public:
    void VehicleSound()
    {
        cout << "A bike brooommmmmmmmm\n"; 
    }
}; 

int main()
{
// Dynamic Allocation 
    Vehicle* a1 = new Car();
    Vehicle* a2 = new Bike();


    a1->VehicleSound();
    a2->VehicleSound();
}