#include<iostream>
#include<string>
#include<algorithm>

using namespace std; 
int main()
{
    string s = "ahmed"; 
    cout << "Before first halfed Reversed: " << s << endl;

reverse(s.begin(), s.begin()+3);
cout << "after first halfed Reversed: " << s;
}