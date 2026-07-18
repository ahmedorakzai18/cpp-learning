// here we used Pass by Refrence method with we will 
// further learn in Pointer.

#include <iostream>
using namespace std; 

int swap(int& a, int& b)
{
    int temp = a;
    a = b; 
    b = temp; 
}
int main()
{
    int a=5 , b=10;

    cout << "a= " << a << " " << "b= "<< b << endl ; 
    swap(a,b);
    cout << "a= " << a << " " << "b= " << b ;
}