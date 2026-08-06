#include <iostream>
using namespace std; 

int Factorial(int n)
{
    int factorial = 1; 
    for(int i=1; i<=n; i++)
    {
        factorial *= i ; 
    }
    return factorial; 
}

int NCR(int n, int r)
{
    int nfc= Factorial(n);
    int rfc= Factorial(r);
    int tfc= Factorial(n-r);
    return nfc/(rfc*tfc);
}

int main()
{
int n; 
cout << "Enter Total: "; 
cin >> n; 

for(int i=0; i<n; i++)
{
    for(int j=0; j<i; j++)
    {cout << NCR(i,j) << " "; }
    cout << endl; 
}

}