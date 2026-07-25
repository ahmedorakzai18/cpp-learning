#include<iostream>
using namespace std;

class Student
{
    public:
    string name; 
    int roll; 
    float gpa; 

    // Constructor
    Student(string n, int r, float g)
    {
        name = n; 
        roll = r; 
        gpa = g; 
    }

    // Function
    void display()
    {
        cout << "Name: " << name << endl; 
        cout << "Roll: " << roll << endl; 
        cout << "gpa: " << gpa << endl; 
    }

}; 

int main()
{
    Student s1("ali", 2 , 2.7); 
    Student s2("zia", 21 , 2.1); 

    s1.display(); 
    cout << endl; 
    s2.display(); 
}