#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the number: "; 
    cin >> n; 

    int arr[n]; 
    for(int i=0; i<n; i++)
    {
        cout << "Enter the value of " << i << " : "; 
        cin >> arr[i]; 
    }

    int mx = arr[0];
    for(int i=0; i<n; i++)
    {
        if(mx<arr[i])
        {
        mx = arr[i];
        }
    }

    int smx = INT8_MIN; 
    for(int i=0; i<n; i++)
    {
        if(smx<arr[i] && arr[i] != mx)
        {
        smx = arr[i];
        }
    }

    cout << "max is: " << mx << endl; 
    cout << "second max is: " << smx << endl; 

}