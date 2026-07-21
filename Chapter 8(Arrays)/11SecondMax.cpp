// Had a hard time with this code

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,423,51}; 


    int mx = INT8_MIN; 
    for(int i=0; i<5; i++)
    {
        mx = max(mx , arr[i]);
    }

    int smx = INT8_MIN;
    for(int i=0; i<5; i++)
    {
        if(arr[i] != mx)
        smx = max(smx , arr[i]); 
    } 

    cout << smx; 

    
}