#include<iostream>
using namespace std; 
int main()
{
    string s; 
    cout << "enter: "; 
    getline(cin, s); 
    
    int countV = 0; 

    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
{        countV++;}
    }

    cout << "Vowels in your Sentance is: " << countV;
}