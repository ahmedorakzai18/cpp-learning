#include<iostream>
using namespace std; 
int main()
{
    int N; 
    cout << "Enter the Number: "; 
    cin >> N; 

    int arr[N]; 

    // INPUT
    for(int i = 0; i<N; i++)
    {
        cout << "Enter value of " << i << " : ";
        cin >> arr[i]; 
    }

    // OUTPUT
    for(int i = 0; i<5; i++)
    {
        cout << arr[i]; 
        cout << " "; 
    }
}