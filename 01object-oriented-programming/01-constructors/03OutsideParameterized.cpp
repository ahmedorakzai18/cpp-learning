#include<iostream>
using namespace std; 

class Car {

    public:

    string name ;
    int model; 
    float fuelAvg; 

    Car(string n, int m, float f); 
};

Car::Car(string n, int m, float f)
{
    name = n ;
    model = m ; 
    fuelAvg = f; 
}

int main()
{

    Car car1("BMW", 1999, 13.3);
    
    cout << "Name of the car is: " << car1.name << endl;
    cout << "model of the car is: " << car1.model << endl;
    cout << "Average of the car is: " << car1.fuelAvg << endl;
}