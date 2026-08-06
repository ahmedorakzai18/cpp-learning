#include <iostream>
using namespace std; 

class Car
{
    private:
    int price;

    public:
    string name; 
    int model; 

    Car(string n, int m)
    {
        name = n; 
        model = m; 
    }

    void getprice()
    {
        cout << "Price of the Car is: " << price; 
    }

    int setprice(int p)
    {
        price = p; 
    }
};

int main()
{
    Car c1("Honda" , 2009); 

    c1.setprice(3050000); 

    cout << "Name of the car is: " << c1.name << endl; 
    cout << "Model of the car is: " << c1.model << endl; 

    c1.getprice(); 
}