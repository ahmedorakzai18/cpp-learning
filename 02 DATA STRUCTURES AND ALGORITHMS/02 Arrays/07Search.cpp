#include<iostream>
using namespace std ;
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

   int arr[n]; 

    for(int i = 0; i<n; i++)
    {
        cout << "Enter value on the Index " << i << " : "; 
        cin >> arr[i]; 
    }

    int Target = 842; 
    bool found = false;

     for(int i = 0; i<n; i++)
    {
      if(arr[i] == Target)
      {
        found = true;
        break;
      }
    }
     if(found)
{
    cout << "\nFound Target in the array.";
}
else
{
    cout << "\nTarget NOT FOUND.";
}
}