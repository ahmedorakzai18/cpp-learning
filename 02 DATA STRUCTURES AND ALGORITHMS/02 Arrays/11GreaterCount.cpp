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

    int count = 0; 
    int mx = INT8_MIN; 
    int x = 10; 

    for(int i=0; i<n; i++)
    {

        if(arr[i]>mx)
        {
            mx = arr[i]; 
        }
        if(arr[i]>x)
        {
            count++; 
        }
    }

    cout << "Maximum value is: " << mx << endl; 
    cout << "\nNumbers that are greater than x are( x = 10 ): " << count; 
}