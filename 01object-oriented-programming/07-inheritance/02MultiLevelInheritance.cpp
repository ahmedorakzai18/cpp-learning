#include<iostream>
#include<string>
using namespace std; 

class Dad // Base class (parent)
{
    public:
    string name; 
    int age; 

    // Default Constructor
    Dad()
    {

    }

    // Parameterized Constructor
    Dad(string n, int a)
    {
        name = n ;
        age = a; 
    }
}; 

class Son: public Dad
{
public:
    using Dad::Dad;         // This line inherits all of Dad's constructors
};

class GrandSon: public Son
{

}; 

int main()
{

    GrandSon gs1; 
    gs1.name = "Hanain"; 
    gs1.age = 6; 

    cout << "\n==========GRANDSON========\n";
    cout << "Grandson Name: " << gs1.name << endl; ;
    cout << "Grandson Age: " << gs1.age << endl; 


    cout << "\n==========DAD========\n";
    Dad d1("Noor Muhammad", 76);

    cout << "Grandad Name: " << d1.name << endl; ;
    cout << "Grandad Age" << d1.age << endl;


cout << "\n==========SON========\n";
    Son s1("Liatat Khan", 47);

    cout << "Dad Name: " << s1.name << endl; ;
    cout << "Dad Age" << s1.age << endl;
}