#include <iostream>
using namespace std; 

void greet(int a)
{
    if(a==0)   // Basic Case
    return ; 

    cout << "hello world\n";
    greet(a-1);  // Recursive Case
}

int main()
{
    int n; 
    cout << "Enter the number of times u wanna print: "; 
    cin >> n;
    greet(n); 
}