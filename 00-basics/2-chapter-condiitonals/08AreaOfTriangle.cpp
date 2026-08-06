#include <iostream>
using namespace std; 
int main()
{
    int a,b,c; 
    cout << "Enter the value of the First Side: "; 
    cin >> a; 
     
    cout << "Enter the value of the Second Side: "; 
    cin >> b; 
     
    cout << "Enter the value of the Third Side: "; 
    cin >> c; 

    if((a+b)>c &&( a+c)>b && (c+b)>a)
    {
        cout << "Yes The triangle is Possible."; 
    }
    else
    {
        cout << "No they can't be.";
    }
}
