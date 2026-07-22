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
    

    int product = 1; 
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            product *= arr[i][j]; 
        } 
    }

    cout << "\nPRODUCT OF ALL THE DIGITS INSIDE IS: " << product ; 
}