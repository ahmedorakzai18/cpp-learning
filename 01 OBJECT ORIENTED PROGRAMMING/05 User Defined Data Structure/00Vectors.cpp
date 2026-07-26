#include<iostream>
#include<vector>

using namespace std; 
int main()
{
    int n; 
    cout << "enter the No: "; 
    cin >> n; 

    vector<int> arr(n);  // SYNTAX

    for(int i=0 ; i<n ; i++)
    {
        cout << "enter the value of " << i << " : "; 
        cin >> arr[i]; 
    }

    arr.push_back(3); 
    arr.push_back(3); 
    arr.push_back(3); 
    arr.push_back(3); 


    for(int i=0 ; i<arr.size() ; i++)
    {
        cout << "value of " << i << " : " << arr[i]; 
        cout << endl; 
    }

    cout << "capacity: " << arr.capacity(); 
}