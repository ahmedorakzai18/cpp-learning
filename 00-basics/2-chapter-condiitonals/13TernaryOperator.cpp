// To Save lines we use Ternary Operator

#include<iostream>
using namespace std ;
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    (n%2==0) ? cout << "Even" : cout << "Odd"; 

    return 0 ; 
}