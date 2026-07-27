#include<iostream>
using namespace std; 

class Animal // base class
{
    public:
    void animalsound()
    {
        cout << "An animal makes a sound." << endl; 
    }
}; 

class Dog: public Animal // derived class
{
    public:
    void animalsound()
    {
        cout << "sound of the dog. WOOF WOOF.\n"; 
    }
};

class Cat: public Animal // derived class
{
    public:
    void animalsound()
    {
        cout << "sound of a cat. meow.\n"; 
    }
};

int main()
{
    Animal a; 
    Dog d; 
    Cat c;

    a.animalsound();
    d.animalsound(); 
    c.animalsound();  
}