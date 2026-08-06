#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter the Element Number: "; 
    cin >> n; 

    int arr[n]; 
    for(int i=0; i<n; i++)
    {
        cout << "Enter the NO " << i << " : "; 
        cin >> arr[i]; 
    }

    int mn = arr[0]; 
    for(int i=1; i<n; i++)
{
        if(arr[i] < mn)
        {
            mn = arr[i];
        }
}
cout << "\nTHE Smallest No here is: " << mn;
}