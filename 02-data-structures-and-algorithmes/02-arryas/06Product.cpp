#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n;  

    int arr[n]; 

    for(int i=0; i<n; i++)
    {
        cout << "enter the value of index Number " << i << " : ";
        cin >> arr[i];  
    }

    int product = 1; 

    for(int i=0; i<n; i++)
    {
        product *= arr[i];
    }

    cout << product << " "; 

}