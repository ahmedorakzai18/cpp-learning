#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the numbers: "; 
    cin >> n; 

    int arr[n]; 
    for(int i=0; i<n; i++)
    {
        cout << "enter no " << i << " : "; 
        cin >> arr[i]; 
    }

    int mx = arr[0]; 
    for(int i = 1; i<n; i++)
    {
        if(arr[i] > mx)
        mx = arr[i]; 
    }
cout << "\nTHE LARGEST No here is: " << mx;
}