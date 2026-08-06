#include <iostream>
using namespace std;

int fibo(int a)
{
    if(a==1 or a==2)
    return 1;

    return fibo(a-1)+fibo(a-2);}

int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    cout << fibo(n); 
}