#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter Number: "; 
    cin >> n; 

    int arr[n]; 

    for(int i=0; i<n; i++)
    {
        cout << "Enter value for Number " << i << " : " ; 
        cin >> arr[i]; 
    }

    int fact = 1; 
    for(int i=1; i<n; i++)
    {
        fact *= arr[i]; 
    }
    cout << "Factorial: " << fact; 
}