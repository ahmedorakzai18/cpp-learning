// Permutation.

#include <iostream>
using namespace std; 

int Permutation(int n)
{
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac *= i; 
    }

    return fac; 
}

int main()
{
int n,r; 
cout << "Enter the Total: ";
cin >> n ;

cout << "Enter the Arranging: ";
cin >> r ;

int nfac=Permutation(n);
int rfac = Permutation(n-r);

cout << nfac/rfac; 

}