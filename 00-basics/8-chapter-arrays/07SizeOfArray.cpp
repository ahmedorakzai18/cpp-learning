#include<iostream>
using namespace std; 
int main()
{
    int arr[] = {23,44,22,117,47,85}; 
    // Now here we dont know the elements, So...
    
    cout << "Bytes: " << sizeof(arr); // Gives bytes.

    cout << endl;

    cout << "Elements: " << sizeof(arr)/4; // Bytes divided by one element

}