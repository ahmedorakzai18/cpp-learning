#include<iostream>
using namespace std; 
int main()
{
    char ch = 'x'; 
    cout << ch << endl; 

    // Now to find The ASCII Value

    char x; 
    cout << "Enter the Character: ";
    cin >> x; 
    
    int ASCII = (int)x;
    cout << ASCII << endl ;
    

    // Now if i want to change the Sequence

    int No; 
    cout << "Enter the Number: "; 
    cin >> No; 

    char cc = (char)No; 
    cout << cc ; 
}