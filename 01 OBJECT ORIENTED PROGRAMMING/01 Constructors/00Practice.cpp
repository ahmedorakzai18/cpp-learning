#include<iostream>
using namespace std; 

class Student{

    public:

    string name; 
    int roll; 
    float gpa; 
    int marks;

    void display()
    {
        cout << "\nthe name: " << name; 
        cout << "\nthe roll: " << roll; 
        cout << "\nthe gpa: " << gpa; 
        cout << "\nthe marks: " << marks; 
    }
};

int main()
{

    Student s1;
    s1.name;
    cout << "enter the name: "; 
    getline(cin , s1.name);

    s1.gpa; 
    cout << "enter the gpa: "; 
    cin >> s1.gpa; 

    s1.marks; 
    cout << "enter the marks: "; 
    cin >> s1.marks; 

    s1.roll; 
    cout << "enter the roll: "; 
    cin >> s1.roll; 

    s1.display();
}