#include<iostream>
using namespace std;

class Car{

    public:

    string name; 
    int year;
    float FuelAvg;
    float milage;
};

void print(Car crr)
{
    cout << crr.name << endl ;
    cout << crr.year << endl ;
    cout << crr.milage << endl ;
    cout << crr.FuelAvg << endl ;
}

void change(Car& crr) // as u can see object is passing by refrence here, that is why it changes.
{
    crr.name = "audi";
    crr.year =  2009;
    crr.milage = 1500.40;
    crr.FuelAvg = 10.3 ;
}

int main()
{
    Car C1;
    C1.name = "Fortuner"; 
    C1.FuelAvg = 8.5; 
    C1.milage = 10500.8; 
    C1.year = 2019; 

    print(C1); 
    change(C1);
    print (C1);

}