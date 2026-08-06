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
    

    int sum = 0; 
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            sum += arr[i][j]; 
        } 
    }

    cout << "\nSUM OF ALL THE DIGITS INSIDE IS: " << sum ; 
}