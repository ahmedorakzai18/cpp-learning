#include<iostream>
using namespace std; 

class Car
{
    private:
    float price; 

    public:
    string name; 
    int model; 

    Car(string n, int m)
    {
        name = n ; 
        model =m ;
    }

    //getter

    void getprice()
    {
        cout << "price of the car is: " << price; 
    }

    // setter

    void setter(float p)
    {
        price = p ; 
    }
};

int main()
{
    Car c1("toyota" , 2014); 

    cout << "name: " << c1.name << endl;
    cout << "model: " << c1.model << endl;

    c1.setter(3059000.032);
    
    c1.getprice(); 
}