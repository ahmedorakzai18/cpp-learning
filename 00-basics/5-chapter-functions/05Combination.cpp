#include <iostream>
using namespace std; 

int fact(int n)
{
    int Fac=1;
    for(int i=1;i<=n;i++)
    {
        Fac *= i;
    }   
    return  Fac; 
}

int main()
{

    int n , r; 
    cout << "Enter the Total Number: "; 
    cin >> n; 

    cout << "Enter the Choice Number: "; 
    cin >> r;
    
    int nfc= fact(n);
    int rfc= fact(r);
    int tfc= fact(n-r);

    cout << "The Answer is: " ; 
    cout << nfc/(rfc*tfc); 
    
}