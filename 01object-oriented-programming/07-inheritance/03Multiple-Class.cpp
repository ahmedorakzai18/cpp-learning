// Multiple inheritance
// a derived class can inherit from more than one base class.

#include <iostream>
using namespace std; 

class Dad
{
    public:
    string eyes; 
    bool baldness; 
    bool Tall; 
};

class Mom
{
    public:
    string hairColor;
    string senseOfHumor;
    int iq;
}; 


class Child1 : public Dad, public Mom
{
public:
int age; 
};


class Child2 : public Dad, public Mom
{
public:
string meanness; 
}; 

int main()
{
    Child2 alan;
    alan.eyes = "Blue";
    alan.baldness = 1;
    alan.meanness = "Very mean";

    cout << "Alan eyes colour is: " << alan.eyes << endl; 
    cout << "Alan is indeed gonna be: " << alan.baldness << endl;
    cout << "alan is: " << alan.meanness << endl;

}