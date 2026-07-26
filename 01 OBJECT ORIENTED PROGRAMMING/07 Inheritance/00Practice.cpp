#include<iostream>
#include<string>
using namespace std; 

// Multi-Level Inheritance
class Vehicle
{
    public: // access specifier
    string name; 
    int model; 
    string fuel; 

    Vehicle(string n, int m, string f)  // Parameterized Constructor
    {
        name = n; 
        model = m; 
        fuel = f; 
    }
};

class Car : public Vehicle  // Derived class
{
    using Vehicle::Vehicle; 
};

class Bike : public Vehicle         
{
    using Vehicle::Vehicle; 
};

int main()
{   
    Car c1("Volvo" , 1990 , "Diesel"); 

    Car c2("Tesla" , 2023 , "Electric"); 

    Bike b1("Royal's Enfield" , 2018 , "Petrol");


    cout << "Name of the Car: " << c1.name << endl;
    cout << "Model of the Car: " << c1.model << endl;
    cout << "Fuel of the Car: " << c1.fuel << endl;

    cout << "Name of the Car: " << c2.name << endl;
    cout << "Model of the Car: " << c2.model << endl;
    cout << "Fuel of the Car: " << c2.fuel << endl;

    cout << "Name of the Bike: " << b1.name << endl;
    cout << "Model of the Bike: " << b1.model << endl;
    cout << "Fuel of the Bike: " << b1.fuel << endl;

}