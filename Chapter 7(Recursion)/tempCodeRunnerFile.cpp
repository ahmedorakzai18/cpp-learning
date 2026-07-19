#include <iostream>
using namespace std;

int fibo(int a); 
{
    if(n==1 or n==2)
    return 1;

    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    cout << fibo(n); 
}