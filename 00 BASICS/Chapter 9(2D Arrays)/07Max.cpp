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
        cout << "Enter the Row No " << i << " and coulmn No " << j << " : "; 
        cin >> arr[i][j]; 
        }
    }   
    
        int mx = INT8_MIN; 
        for(int i=0; i<r; i++)
        {   
            for(int j=0; j<c; j++)
            {
            if(arr[i][j]>mx)
            mx = arr[i][j]; 
            }
        }
        cout << "\nMaximum Element is: " << mx ; 
    
}