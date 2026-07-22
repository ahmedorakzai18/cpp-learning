// adding requires both the rows and columns to be equal

#include <iostream>
using namespace std; 
int main()
{
    int arr1[3][3] = {{1,2,3},{6,35,3},{73,2,1}}; 
    int arr2[3][3] = {{10,32,5},{52,4,5},{73,1,23}}; 

cout << "================Array No 1================\n";
for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << arr1[i][j] << " "; 
        }
        cout << endl; 
    }
cout << "\n================Array No 2=====================\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << arr2[i][j] << " "; 
        }
        cout << endl;
    }

cout << "\n================ADDITION OF BOTH ARRAYS=====================\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << arr1[i][j] + arr2[i][j] << " "; 
        }
        cout << endl; 
    }    

}