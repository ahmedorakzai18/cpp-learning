#include <iostream>
using namespace std; 
int main()
{
    float Principle,Rate,Time; 
    cout << "Enter the Amount: ";
    cin >>  Principle ; 
    cout << "Enter the intrest Rate: " ; 
    cin >> Rate ; 
    cout << "Enter the Time: "; 
    cin >>  Time; 
    
    float SI = Principle*Rate*Time/100; 

    cout << "The Intrest u have to Return: "; 
    cout << SI;  

}