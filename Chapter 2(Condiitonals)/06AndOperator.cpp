#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Numebr; "; 
    cin >> n; 

    if(n%3==0 and n%5==0)
    {
        cout << "Yes it is both divisible by 3 and 5."; 
    }
    else
    {
        cout << "No its is not divisible by Both"; 
    }
}