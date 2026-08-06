#include<iostream>
#include<string>

using namespace std; 
int main()
{
    int x = 22; 
    string s = to_string(x); 

    cout << "Length of the String is: " << s.length() << endl; 
    cout << s; 

    cout << s+"jfkd"; 
}