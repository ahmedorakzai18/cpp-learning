#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Table: "; 
    cin >> n; 

    cout << endl << "Table of : " << n << endl << endl; 
    for(int i=1;i<=10;i++)
    {
        cout << n << "*" << i << " = " << n*i << endl ; 
    }

    return 0; 
}