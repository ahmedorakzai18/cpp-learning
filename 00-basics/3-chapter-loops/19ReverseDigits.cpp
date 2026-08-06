#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 
    int count = 0; 
    int Reverse=0; 

    while(n>0)
    {
        int ld = n%10; 
        Reverse = Reverse*10; 
        Reverse = Reverse+ld; 
        n = n/10;    
    }
    cout << "Reverse is: " << Reverse ; 
}