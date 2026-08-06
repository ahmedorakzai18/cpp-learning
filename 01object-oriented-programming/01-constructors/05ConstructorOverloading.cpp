#include<iostream>
using namespace std; 

class Student
{
    public:

    string name; 
    int roll;
    float gpa;
    int marks;

    //Default Constructor

    Student()
    {
        name = "Unknown"; 
        roll = 0;
        marks = 00;
        gpa = 0.00;
    }

    Student(string n, int r, float g, int m)
    {
        name = n; 
        roll = r; 
        gpa = g; 
        marks = m; 
    }

    Student(int r, string n, float g, int m)
    {
        name = n; 
        roll = r; 
        gpa = g; 
        marks = m; 
    }

    Student(float g, int m)
    {
        gpa = g; 
        marks = m; 
    }
}; 

int main()
{
    Student s1("ahmed",1,3.1,82);

    Student s2(2,"saif",2.9,78);

    Student s3(2.9,78);

    Student s4;
    s4.name = "Yardan"; 
    s4.gpa = 3.10; 
    s4.roll = 999; 
    s4.marks = 79; 

    Student s5; 


    cout << s1.name << " " << s1.roll << " " << s1.gpa << " " << s1.marks << " ";
    cout <<endl << s2.name << " " << s2.roll << " " << s2.gpa << " " << s2.marks << " ";
    cout <<endl << s3.gpa << " " << s3.marks;
    cout <<endl << s4.name << " " << s4.roll << " " << s4.gpa << " " << s4.marks << " ";
    cout <<endl << s5.name << " " << s5.roll << " " << s5.gpa << " " << s5.marks << " ";

}