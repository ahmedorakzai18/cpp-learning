//Vector is a dynamic array which can grow and shrink in size.It is a part of the C++ (STL).

#include<iostream>
#include<vector> // Adding vector header file is a Must.

using namespace std; 
int main()
{
    int n;
    cout << "Enter the Number: "; 
    cin >> n; 

    vector<int> arr(n); 

    for(int i=0;i<n;i++)
    {
        cout << "Value of " << i << " : "; 
        cin >> arr[i];
    }
   
    cout << "values are: ";

    for(int i=0;i<n;i++)
    {
        cout << arr[i] << " "; 
    }

    arr.push_back(43);  // This will add 43 at the end of the vector
    
    cout << "\n\n NEW values are : ";

    for(int i=0; i<arr.size(); i++) // we are going from zero to the size of the vector cuz we added one more element in the vector
    {
        cout << arr[i] << " "; 
    }

        arr.pop_back(); // This will remove the last element of the vector
    
    cout << "\n\n NEW values AFTER POP BACK : ";

    for(int i=0; i<arr.size(); i++) // same shit as above.
    {
        cout << arr[i] << " "; 
    }
}