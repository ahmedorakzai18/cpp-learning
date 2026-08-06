#include <iostream>
using namespace std; 
int main()
{
    int a,b,c; 
    cout << "Enter the value of the First Number: "; 
    cin >> a; 
     
    cout << "Enter the value of the Second Number: "; 
    cin >> b; 
     
    cout << "Enter the value of the Third Number: "; 
    cin >> c; 

    if(a>b && a>c)
        {
            cout << "A is greatest and value is: " << a ; 
        }
    else if(b>a && b>c)
        {
            cout << "B is greatest and value is: " << b ; 
        }
    
    else if(c>b && c>a)
        {
            cout << " C is greatest and value is: " << c ; 
        }
    
    else
    cout << "All values are same"; 
    return 0; 
}