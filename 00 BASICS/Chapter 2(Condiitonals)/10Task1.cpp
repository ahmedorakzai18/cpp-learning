#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    if(n%3==0 || n%5==0 && n%15!=0) // OR if(n%3==0 || n%5==0) and (n%15!=0)
    cout << "Divisible"; 
    
    else 
    {
        cout << "Not Divisible"; 
    }
}