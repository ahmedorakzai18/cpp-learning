#include <iostream>
using namespace std; 
int main()
{
    int CP,SP; 
    cout << "Enter the Cost Price of the Product: "; 
    cin >> CP; 
    
    cout << "Enter the Sell Price of the Product: "; 
    cin >> SP; 

    int Profit=SP-CP; 
    int Loss=SP-CP; 
    
    if(CP<SP)
        {
            cout << "Profit is : "<< Profit ; 
        }
    else if(CP>SP)
        {
            cout << "Loss is : " << Loss ; 
        }
    else
        {
            cout << "NO Profit/Loss"; 
        }
    
    return 0; 
}   