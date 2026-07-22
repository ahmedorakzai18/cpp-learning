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
            cout << "Enter the row No (" << i << ") and column No (" << j << ") : "; 
            cin >> arr[i][j]; 
        }
    }


    int mn = INT8_MAX; 
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]<mn)
            mn = arr[i][j]; 
        }
    }
    cout << "MINIMUM DIGIT HERE IS: " << mn ;
}