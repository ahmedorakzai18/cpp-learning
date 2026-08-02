#include<iostream>
using namespace std; 
int main()
{

    char ch[100]; 

    cout << "enter the char array: "; 
    
    cin.getline(ch, 100, '.'); 

    cout << "output is: " << ch; 
}