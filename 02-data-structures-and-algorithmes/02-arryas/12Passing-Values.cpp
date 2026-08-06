// Arrays are Passed By Refrence

#include<iostream>
using namespace std; 

void change(int arr[])
{
    arr[5] = 6; 
}
int main()
{
    int arr[] = {1,2,3,4,5,23};

    cout << arr[5] << endl; 

    change(arr); 

    cout << "Changed Value of the Index 5: " << arr[5];
}