#include<iostream>
using namespace std; 

class Car {

    public:

    string name ;
    int model; 
    float fuelAvg; 

    // Default Constructor, here is a must to type

    Car()
    {
        
    }

    // Parameterized Constructor

    Car( string n, float f, int m)
    {
        name = n; 
        fuelAvg = f; 
        model = m; 
    }

};



int main()
{
    Car c1; 
    c1.name = "bmw"; 
    c1.fuelAvg = 12.3; 
    c1.model = 1990; 

    cout << "\ncar name: " << c1.name << endl; 
    cout << "car model: " << c1.model << endl; 
    cout << "car fuel average: " << c1.fuelAvg << endl; 

    Car c2("audi",12.5, 2000);
    
    
    cout << "\ncar name: " << c2.name << endl; 
    cout << "car model: " << c2.model << endl; 
    cout << "car fuel average: " << c2.fuelAvg << endl; 
}