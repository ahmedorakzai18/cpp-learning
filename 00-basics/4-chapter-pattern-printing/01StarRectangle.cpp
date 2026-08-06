#include <iostream>
using namespace std; 
int main()
{
        int m,n;
        cout << "Enter the Number of Rows: "; 
        cin >> m; 
        cout << "Enter the Number of Columns: "; 
        cin >> n;  

        for(int i=1;i<=m;i++)
        {
            for(int j=1;j<=n;j++){
            cout << "*"; }
            cout << endl;  
        }
        
}