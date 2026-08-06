#include<iostream>
using namespace std; 

class Student{

    public: 

    string name; 
    int roll; 
    int marks; 
    float gpa; 

};

int main()
{

    Student s1; 
    s1.name; 
    cout << "enter the name; "; 
    getline(cin , s1.name);

    s1.roll; 
    cout << "enter the roll no; "; 
    cin >> s1.roll;
    
    s1.marks; 
    cout << "enter the marks; "; 
    cin >> s1.marks;
    
    s1.gpa; 
    cout << "enter the gpa; "; 
    cin >> s1.gpa;
 
    cout << "Name: " << s1.name << endl; 
    cout << "roll: " << s1.roll << endl; 
    cout << "marks: " << s1.marks << endl; 
    cout << "gpa: " << s1.gpa << endl; 
}