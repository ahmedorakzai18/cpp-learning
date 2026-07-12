// #include <iostream>
// using namespace std; 
// int main()
// {
//     int n; 
//     cout << "Enter the Number of times u wanna run it: "; 
//     cin >> n; 
//     for(int i=1;i<=n;i++)
//     {   if(i%2 == 0) 
//         cout << i << " "; 
//     }
//     return 0; 
// }

// CODE: 2 >>>>> PRINT THE ODD NUMBERS

#include <iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number of times u wanna run it(METHOD 2): "; 
    cin >> n; 
    for(int i=2;i<=n;i+=2)
    {
          cout << i << " "; 
    }
    return 0; 
}