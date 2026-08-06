#include <iostream>
using namespace std; 

int Sum(int n1, int n2)
{
    return n1 + n2;
}


int main()
{   
    int n1,n2;
    cout << "Enter the First Number: "; 
    cin >> n1;

    cout << "Enter the Second Number: "; 
    cin >> n2; 

    cout << Sum(n1,n2); 
}