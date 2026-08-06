#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number and tell if it is a three digit Number or No: "; 
    cin >> n; 

    if(n>99 && n<1000) // We can also write a simple 'and' instead of '&&'.
    {
        cout << "Yes it is a three digit Number"; 
    }
    else
    {
        cout << "No it's Not" ;
    }
}