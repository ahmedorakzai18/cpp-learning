#include <iostream>
using namespace std ;
int main()
{
    float n; 
    cout << "Enter the Percentage of the Student: "; 

    cin >> n; 

    if(n < 0 || n > 100)
    {
        cout << "Invalid Number";
    }

    else if(n>=81 && n<=100)
    {
        cout << "Very Good(A1)"; 
    }
    else if(n>=61)
    {
        cout << "Good(B)"; 
    }
    else if(n>=40)
    {
        cout << "Average(C)"; 
    }
    else
    {
        cout << "Fail(F)"; 
    }
    
}