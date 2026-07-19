#include<iostream>
using namespace std; 
int main()
{
    int a = 1; 
    cout << "Value of a: " << a << endl ;
    
     
    cout << "Address of a: " << &a << endl ;

    int* pointer = &a ; // here we saved the address in a pointer

    cout << "address through pointer: " << pointer << endl; // it will also print the address

    cout << "value of x through pointer: " << *pointer << endl; 

    *pointer = 2; // here we updated the value of x 

    cout << "updated value of x: " << *pointer ; 

}