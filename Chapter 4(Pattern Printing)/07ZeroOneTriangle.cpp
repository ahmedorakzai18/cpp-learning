#include <iostream>
using namespace std; 
int main()
{
    int m ; 
    cout << "Enter the Number: "; 
    cin >> m; 

    for(int i=1; i<=m; i++)
    {
        for(int j=1;j<=i;j++)
        if((i+j)%2 == 0)
        cout << 1 << " "; 
        else    
        cout << 0  << " "; 
        cout << endl; 
    }
}