#include<iostream>
#include<string>

using namespace std; 
int main()
{
    string name;
    cout << "enter name: "; 
    getline(cin , name); 
    
    int n; 
    cout << "Character you wanna know: "; 
    cin >> n; 
    
    cout << name[n]; 

    cout << endl; 
    name[3] = 'd';  // Updating in Indexing

    cout << name; 
}