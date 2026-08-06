// METHOD 1: (10 TIMES)
// #include <iostream>
// using namespace std; 
// int main()
// {
//     int n; 
//     cout << "Enter the Number: "; 
//     cin >> n; 
//     for(int i=19;i<=n;i+=19)
//     {   
//         cout << i << " "; 
//     }
//     return 0; 
// }
// OR  (190 TIMES)

#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number : "; 
    cin >> n; 
    for(int i=1;i<=n;i++)
    {   if(i%19 == 0) 
        cout << i << " "; 
    }
    return 0; 
}