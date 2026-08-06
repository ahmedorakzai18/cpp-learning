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
         if(arr[i]>mx)
         {
            mx = arr[i];; 
         }
        }
        cout << "Maximum value in your array is: " << mx; 
}