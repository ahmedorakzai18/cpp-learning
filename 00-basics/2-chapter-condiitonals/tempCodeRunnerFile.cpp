#include <iostream>
using namespace std; 
int main()
{
    int l,b; 
    cout << "Enter the Length of a Rectangle: "; 
    cin >> l; 
    cout << "Enter the Bredth of A Rectangle: "; 
    cin >> b;
    
    int A = l*b; 
    int P = 2*(l+b); 

    if(A>P)
    {
        cout << "Area is Greater than Parameter."; 
    }
    else 
    {
        cout << "Parameter is greater: "; 
    }
    
    return 0 ; 
}