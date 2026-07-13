#include <iostream>
using namespace std ; 
int main()
{
    int n;
    cout << "Enter the number: "; 
    cin >> n; 

    for(int i=1; i<n; i++)
    {
        if(n%i == 0)
        cout << i << " " ;  
    }
}


// GREATEST FACTOR IN DECENDING ORDER

// #include <iostream>
// using namespace std; 
// int main()
// {
//     int n; 
//     cout << "Enter the Number: "; 
//     cin >> n ;

//     for(int i=n/2;i>=1;i--)
//     {if(n%i==0)
//     cout << i << " ";    
//     break;
//     }}
