#include <iostream>
#include <algorithm>
using namespace std; 
int main()
{
    string s = "ahmed"; 
    cout << s << endl; 

    reverse(s.begin(),s.end()); 

    cout << s; 
}