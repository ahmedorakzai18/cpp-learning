#include<iostream>
using namespace std; 

void change(int arr[])
{
    arr[2] = 23;
}

int main()
{
    int arr[4] = {1,2,3,4};

    for(int i=0;i<4;i++)
    {
        cout << "Put value of " << i << " : "; 
        cin >> arr[i]; 
    }
    cout << endl;
cout << "-----Values before UPDATION-------\n";
        for(int i=0;i<4;i++)
    {
        cout << "The value of " << i << " : "; 
        cout << arr[i] << endl;  
    }
cout << endl;
    change(arr);


cout << "-----Values after UPDATION-------\n";
 for(int i=0;i<4;i++)
    {
        cout << "The value of " << i << " : "; 
        cout << arr[i] << endl;  
    }
cout << endl;

cout << "Size of your Array: "; 
cout << sizeof(arr);
}