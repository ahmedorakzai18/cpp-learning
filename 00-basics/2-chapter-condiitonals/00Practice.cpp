#include <iostream>
using namespace std; 
int main()
{
    int a,b; 
    char op; 
    cout << "Enter N1: "; 
    cin >> a; 

    cout << "Enter the Operator You like: "; 
    cin >> op; 

    cout << "Enter N2: "; 
    cin >> b; 

    switch(op)
    {
        case '+':
        cout << a+b; 
        
        case '-':
        cout << a-b; 
        
        case '*':
        cout << a*b; 
        
        case '/':
        cout << a/b; 
        
    }

}