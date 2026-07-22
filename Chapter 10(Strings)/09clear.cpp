#include <iostream>
using namespace std; 
int main()
{
    string s = "ahmed";

    cout << "Tense is: " << s << " ";
    cout << "length is: " << s.length() ;
    
    s.clear(); // Makes the string empty
    
    cout << endl;

    cout << "Tense is: " << s << " ";
    cout << "length is: " << s.length() ;
}
