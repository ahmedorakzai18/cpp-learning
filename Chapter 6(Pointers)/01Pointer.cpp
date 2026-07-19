#include <iostream>
using namespace std; 
int main()
{
    int x=1; 
    cout << "Value of x: " << x << endl; // initializes an integer

    cout << "Address of x: "<< &x << endl; // &x uses the address-of operator

    int* p = &x ;  // declares an integer pointer p

    cout << "Address of x through a Pointer: " << p << endl; // outputs the hexadecimal memory address stored

}