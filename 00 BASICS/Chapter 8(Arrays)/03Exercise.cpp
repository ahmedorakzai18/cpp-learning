#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the size of your array: "; 
    cin >> n; 

    cout << "\n-----SIZES-----\n";
    int arr[n]; 
    for(int i=0;i<n;i++)
    {
        cout << "Enter the value of " << i << " : " ;
        cin >> arr[i] ; 
    }
    cout << endl; 
    cout << "------VALUES------\n";
    for(int i=0;i<n;i++)
    {
        cout << "Printed the value of " << i << " : " << arr[i] << endl;
    }
}   