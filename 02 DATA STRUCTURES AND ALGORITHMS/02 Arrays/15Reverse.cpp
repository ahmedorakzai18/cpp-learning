#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
int n; 
cout << "Enter the Number: "; 
cin >> n; 


vector<int> arr(n); 
for(int i=0; i<n; i++)
{
    cout << "Enter the value of " << i << " : "; 
    cin >> arr[i]; 
}

for(int i=0; i<n; i++)
{
    cout << "\nValues you Have Put in the Array are: " << arr[i] << " "; 
}
cout << endl;


cout << "\nREVERSE Values in Array after Sorting: ";
reverse(arr.begin() , arr.end());
for(int i=0; i<n; i++)
{
    cout << arr[i] << " "; 
}
}