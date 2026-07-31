#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n; 
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cout << "Enter value of " << i << " : "; 
        cin >> v[i];
    }

    cout << "Array elements are: ";
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl; 

    
    sort(v.begin() , v.end()); 

    cout << "NEW Array elements are: ";
    for(int i=0; i<n; i++)
    {
        cout << v[i] << " ";
    }
}