#include<iostream>
using namespace std; 
int main()
{
    int a,b; 
    char op; 
    cout << "Enter the number: ";
    cin >> a; 
    cout << "Enter the operator: "; 
    cin >> op;     
    cout << "Enter the number: ";
    cin >> b; 

    switch (op)
    {
        case '+':
        cout << a+b; 
        break;
        case '-':
        cout << a-b; 
        break;
        case '*':
        cout << a*b; 
        break;
        case '/':
        cout << a/b; 
        break;
        
    } 
}