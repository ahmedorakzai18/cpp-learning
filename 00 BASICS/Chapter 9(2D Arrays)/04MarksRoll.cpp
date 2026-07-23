#include <iostream>
using namespace std; 
int main()
{
    int r,c; 
    cout <<"Enter the number of rows: "; 
    cin >> r; 
    cout <<"Enter the number of columns: "; 
    cin >> c; 
    
    int arr[r][c] ;

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << "enter value of " << i << " and value of " << j << " : "; 
            cin >> arr[i][j]; 
        }
    cout << endl; 
    }

    cout << "|Roll No| |Marks|" << endl;; 
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout << arr[i][j] << " "; 
        }
    cout << endl; 
    }
}