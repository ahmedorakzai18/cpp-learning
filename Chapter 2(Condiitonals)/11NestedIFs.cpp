// Take three +ve integers input and print the greatest of them using nested.

#include<iostream>
using namespace std ;
int main()
{
    int a,b,c; 
    cout << "Enter the value of the First Number: "; 
    cin >> a; 
     
    cout << "Enter the value of the Second Number: "; 
    cin >> b; 
     
    cout << "Enter the value of the Third Number: "; 
    cin >> c; 

    if(a>b)
    {
        if(a>c)
        cout << "A"; 
        else
        cout << "C"; 
    }

    if(b>a)
    {
        if(b>c)
        cout << "B"; 
        else
        cout << "C"; 
    }

}