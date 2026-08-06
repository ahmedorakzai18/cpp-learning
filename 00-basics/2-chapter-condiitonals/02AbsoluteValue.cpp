#include<iostream>
using namespace std ;
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 
    if(n>=0)
    {
        cout << n ;
    } 
    else 
    cout << -n; // Cuz -ve*-ve is equal to positive.

    return 0 ; 
}