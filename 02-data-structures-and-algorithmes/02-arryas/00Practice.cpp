#include<iostream>
using namespace std ;
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    int arr[n]; 

    for(int i=0; i<n; i++)
    {
        cout << "Enter the Value of " << i << " : "; 
        cin >> arr[i]; 
    }
    cout << endl; 

    int sum = 0; 

    for(int i=0; i<n; i++)
    {
        sum += arr[i]; 
    }
    cout << "\n Sum is: " << sum; 
}