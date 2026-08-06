#include <iostream>
using namespace std ;

int combi(int a)
{
     int FAC = 1; 
    for(int i=1; i<=a; i++)
    {
        FAC *= i ; 
    }
    return FAC;
}


int main()
{
    int n,r; 
    cout << "Enter the Number: "; 
    cin >> n; 

    cout << "Enter the Number: "; 
    cin >> r; 

    int nFAC = combi(n);   
    int rFAC = combi(r); 
    

    cout << nFAC/rFAC; 
}