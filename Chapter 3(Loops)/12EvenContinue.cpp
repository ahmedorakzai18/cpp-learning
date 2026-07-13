#include <iostream>
using namespace std;
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    for(int i=2;i<=n;i++)
    {
        if(i%2==0)
        {
            cout << i << " "; 
        }
    }
}