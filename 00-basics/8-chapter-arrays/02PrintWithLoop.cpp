#include <iostream>
using namespace std; 
int main()
{

int arr[4];
for(int i=0;i<4;i++)
{
    cout << "Enter the value of " << i << " : ";
    cin >> arr[i] ; 
} 

// Reverse Order Printed
for(int i=4;i>0;i--)
{
    cout << "Printing the Value of " << i << " is : " << arr[i] << endl; 
}
}