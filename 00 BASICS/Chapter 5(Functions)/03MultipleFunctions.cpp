#include <iostream>
using namespace std; 

void Usa()
{
    cout << "I am in USA." << endl; 
}

void Pak()
{
    cout << "i am in Pakistan.\n";
    // return; 
    Usa();
}

int main()
{
cout << "I am in MAIN." << endl;

Pak();

}