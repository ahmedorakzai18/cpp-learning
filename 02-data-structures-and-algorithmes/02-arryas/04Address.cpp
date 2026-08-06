#include<iostream>
using namespace std; 
int main()
{
    int arr[] = {1,2,3,4}; 

    cout << "\n======HERE YOU WILL BE ABLE TO SEE THE MEMORY ALLOCATION IS CONTIGUOUS======\n\n";
    cout << "Addres of index no 0: " << &arr[0] << endl; 
    cout << "Addres of index no 1: " << &arr[1] << endl; 
    cout << "Addres of index no 2: " << &arr[2] << endl; 
    cout << "Addres of index no 3: " << &arr[3] << endl; 
}