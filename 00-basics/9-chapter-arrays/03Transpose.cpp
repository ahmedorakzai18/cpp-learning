#include <iostream>
using namespace std; 
int main()
{
    int r,c; 
    cout << "Enter the Rows: "; 
    cin >> r; 
    cout << "Enter the columns: "; 
    cin >> c;
    
    int arr[r][c]; 

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "Enter in value of Row " << i  << " Column " << j << " : ";
            cin >> arr[i][j]; 
        }
    }
    
    cout << "\n======TRANSPOSE TABLE OF YOUR ROWS AND COLUMNS IS=======\n"; 
    for(int j=0; j<c; j++)
    {
        for(int i=0; i<r; i++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl; 
    }
}