#include<iostream>
using namespace std; 

class Greet
{
    public:

    void hey();
};

void Greet::hey()
{
    cout << "hello world: "; 
}


int main()
{
    Greet obj1; 
    obj1.hey();

}