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


    cout << "\n\n=======VALUES IN YOUR ARRAYS========\n\n"; 
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " "; 
    }
    cout << endl; 


    int mn = arr[0]; 

        for(int i=0; i<n; i++)
    {
        if(arr[i]<mn)
        {
            mn = arr[i]; 
        }
    }

    cout << "\nMINMUM VALUE IN THE WHOLE ARRAYS IS: " << mn ;
}