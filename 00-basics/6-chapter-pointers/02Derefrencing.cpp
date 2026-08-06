#include <iostream>
using namespace std; 
int main()
{
    int a= 1; 

    cout << "Value of a: " << a << endl ;

    int* ptr = &a; 

    *ptr = 3; //*ptr = 3; is the dereference operator.

    cout << "New Value of a: " << a << endl; 

}