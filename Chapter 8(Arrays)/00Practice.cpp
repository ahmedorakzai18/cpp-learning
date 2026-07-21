#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter the No of Elements in the Array: "; 
    cin >> n; 

    int arr[n]; 
    for(int i=0; i<n; i++)
    {
        cout << "enter the value of " << i  <<" : "; 
        cin >> arr[i]; 
    }

    int min = INT8_MAX;
    for(int i=0; i<n; i++)
    {
        if(arr[i]<min)
        min = arr[i]; 
    }
    cout << "MINIMUM VALUE IS: " << min; 
}