#include<iostream>
using namespace std; 
int main()
{
    string s = "ahmed"; 

    cout << "Befor updation: " << s;

    for(int i=1; i<s.length(); i++)
    {
        if(i%2 == 0)
        {
            s[i]= 'a';
        }
    }
    cout << "\nAfter updation: " << s;
}