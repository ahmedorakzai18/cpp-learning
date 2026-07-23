#include<iostream>
using namespace std; 

class Car{

    public:

    string name; 
    int model; 
    float fuelavg;

    // Default Constructor
    Car()
    {

    }

    //Parameterized Constructor
    Car(string n, int m , float f)
    {
        name = n ;
        model = m ;
        fuelavg = f; 
    }

}; 

int main()
{
Car c1("bmw" , 1990 , 13.5);

cout << "name: " << c1.name << endl; 
cout << "model: " << c1.model << endl; 
cout << "fuel Average: " << c1.fuelavg << endl; 

Car c2;
c2.name = "audi"; 
c2.model = 2000; 
c2.fuelavg = 15.8; 

cout << "name: " << c2.name << endl; 
cout << "model: " << c2.model << endl; 
cout << "fuel Average: " << c2.fuelavg << endl; 
}