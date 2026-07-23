#include <iostream>
using namespace std; 
int main()
{
    string s;
    cout << "Enter Your Sentance: "; 
    getline(cin , s); 

    cout << "Characters in your Sentance is: " << s.length() << endl; 

    s.pop_back(); // Puts another character at last
    cout << s;
    
    cout << "\nUpdated Characters in your Sentance is: " << s.length(); 
}