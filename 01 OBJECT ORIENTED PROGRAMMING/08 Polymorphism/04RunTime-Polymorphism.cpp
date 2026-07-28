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
    Animal* a1 = new dog(); 
    Animal* a2 = new cat(); 

    a1->Sound(); 
    a2->Sound(); 
}