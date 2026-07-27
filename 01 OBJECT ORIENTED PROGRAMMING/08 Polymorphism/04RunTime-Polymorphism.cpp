#include<iostream>
using namespace std; 

class Animal
{
    public:
    virtual void Sound() 
    {
        cout << "animal makes a sound.\n"; 
    }
};

class dog:public Animal
{
    public:
    void Sound()
    {
        cout << "dog barks.\n"; 
    }
};

class cat:public Animal
{
    public:
    void Sound()
    {
        cout << "cat meows.\n"; 
    }
};

int main()
{
    Animal* a; 
    dog d; 
    cat c; 

    a = &d; 
    a->Sound(); 
    
    a = &c; 
    a->Sound(); 
}