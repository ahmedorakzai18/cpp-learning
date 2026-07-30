#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "enter number: " ; 
    cin >> n; 


    int arr[n] ;

    for(int i=0; i<n; i++)
    {
        cout << "value of " << i << " : "; 
        cin >> arr[i]; 
    }
    cout << endl; 

    int sum = 0; 

    for(int i=0; i<n; i++)
    {
        sum += arr[i];  
    }
    cout << "sum is: " << sum << endl; 
}