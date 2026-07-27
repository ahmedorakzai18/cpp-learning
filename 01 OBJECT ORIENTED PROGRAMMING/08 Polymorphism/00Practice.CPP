#include<iostream>
using namespace std; 

class Animal
{
    public:
    virtual void Sound()
    {
        cout << "Sound of an animal.\n"; 
    }
}; 

class Dog: public Animal
{   
    public:
    void Sound()
    {
        cout << "Woof, Woof\n"; 
    }
};

class Cat: public Animal
{
    public:
    void Sound()
    {
        cout << "Meow\n"; 
    }
}; 


int main()
{
    Animal* a; 
    Dog d1; 
    Cat c1; 

    a = &d1; 
    a->Sound(); 

    a = &c1;
    a->Sound(); 

}