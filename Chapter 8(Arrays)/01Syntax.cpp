#include<iostream>
using namespace std; 
int main()
{
    int Roll[5];   // int Roll[5] = {1,2,3,4,5 }

    Roll[0] = 10; 
    Roll[1] = 3; 
    Roll[2] = 0; 
    Roll[3] = -10; 
    Roll[4] = 2-10; 

    cout << "value of 4: "<< Roll[4] << endl; 
    cout << "value of 3: "<< Roll[3] << endl; 
    cout << "value of 1: "<< Roll[1] << endl; 
    cout << "value of 2: "<< Roll[2] << endl; 
    cout << "value of 0: "<< Roll[0] << endl; 
    
}