#include<iostream>
using namespace std; 

class Student{
    
    public:

    string name; 
    int roll; 
    float gpa;

    Student(string n, int r, float g)
    {
        name = n;
        roll = r;
        gpa =  g; 
    }

};

int main()
{
    Student obj1("Ahmed", 1 , 3.25);

    cout << "Name: " << obj1.name << endl; 
    cout << "Roll no: " << obj1.roll << endl; 
    cout << "Grade Point Average: " << obj1.gpa << endl; 
}