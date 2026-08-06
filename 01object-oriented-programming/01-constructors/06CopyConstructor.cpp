#include<iostream>
using namespace std; 

class Student
{
    public:

    string name; 
    int roll;
    float gpa;
    int marks;

    Student()
    {

    }

    Student (string n, int r, float g, int m)
    {
        name = n ;
        roll = r ; 
        gpa = g ; 
        marks = m ;
    }
};


int main()
{
    Student s1("ahmed",1,2.74,72); 
   
    Student s2 = s1; // Copied the whole information

    cout << s1.name << " " << s1.roll << " " << s1.marks << " " << s1.gpa;
    cout << endl << s2.name << " " << s2.roll << " " << s2.marks << " " << s2.gpa;
}