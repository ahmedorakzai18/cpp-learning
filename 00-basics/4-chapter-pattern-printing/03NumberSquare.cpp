#include <iostream>
using namespace std; 
int main()
{
    int m,n; 
    cout << "Enter the Rows: "; 
    cin >> m; 
    cout << "Enter the Columns: "; 
    cin >> n; 

    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cout << j << " ";
        }
    cout << endl; 
    }
}