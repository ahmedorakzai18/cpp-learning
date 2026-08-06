#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    int EvenSum = 0; 

    while(n!=0)
    {
        int ld = n%10; 
        if(ld%2==0)
            {
                EvenSum = EvenSum+ld; 
            }
        n = n/10; 
    }
    cout << "Sum of Even Digits is: " << EvenSum ;

}