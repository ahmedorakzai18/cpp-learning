#include<iostream>
#include<string>

using namespace std; 
int main()
{
    string name; 
    cout << "Enter Name: "; 
    //cin >> name; // Issue is cin stops at the first space.


    // So we use getline() operator.

    getline(cin , name); 
    cout << name; 
}