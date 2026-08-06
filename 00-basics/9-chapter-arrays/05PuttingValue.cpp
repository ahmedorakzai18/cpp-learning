#include <iostream>
using namespace std; 
int main()
{

int r,c; 
cout << "Enter the ROws; "; 
cin >> r ; 

cout << "Enter the Columns; "; 
cin >> c ;

int arr[r][c]; 

for(int i=0; i<r; i++)
{
    for(int j=0; j<c; j++)
    {
        arr[i][j]= 10;  
    }
}

for(int i=0; i<r; i++)
{
    for(int j=0; j<c; j++)
    {
        cout << arr[i][j] << " ";  
    }
    cout << endl; 
}


}