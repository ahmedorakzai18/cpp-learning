#include<iostream>
using namespace std; 

void numbers(int a)
{
    if(a==0)
    return ; 

    
    cout << a <<  " "; 
    numbers(a-1); 
}

int main()
{
    int n; 
    cout << "Enter the number: "; 
    cin >> n; 

    numbers(n); 
}