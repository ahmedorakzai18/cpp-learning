#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Numebr; "; 
    cin >> n; 

    if(n%3==0 || n%5==0)
    {
        cout << "Yes it is divisible by either 3 or 5."; 
    }
    else
    {
        cout << "No its is not divisible by any"; 
    }
}