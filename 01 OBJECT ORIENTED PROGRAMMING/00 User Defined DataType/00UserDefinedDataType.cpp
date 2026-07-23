#include<iostream>
using namespace std; 

class Student{

    public:

    string name; 
    int roll; 
    float gpa; 
    int TMarks; 

    void display()
    {
        cout << "Name: " << name;
        cout << endl; 
        cout << "Roll Number: " << roll;
        cout << endl; 
        cout << "Gpa: " << gpa;
        cout << endl; 
        cout << "Total Marks: " << TMarks;
        cout << endl; 
    }
};

int main()
{
    Student S1; 
    S1.name = "ahmed"; 
    S1.roll = 32;
    S1.gpa = 2.4;
    S1.TMarks = 39; 

    Student S2; 
    S2.name = "Raffay"; 
    S2.roll = 58;
    S2.gpa = 2.43;
    S2.TMarks = 49; 

    S1.display();
    cout << endl; 
    S2.display();
}