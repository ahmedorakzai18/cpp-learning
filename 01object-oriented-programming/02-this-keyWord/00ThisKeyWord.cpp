#include<iostream>
#include<string>

using namespace std; 

class Student
{
    public:
    string name;
    int roll; 
    float gpa; 

    // Perameterized Constructor
    Student(string name, int roll, float gpa)
    {
        this-> name = name; 
        this-> roll = roll; 
        this-> gpa = gpa; 
    }
}; 

int main()
{
    Student S1("Ali",13,2.9); 

    cout << "name: " << S1.name << " " << "roll: " << S1.roll << " " << "gpa: " << S1.gpa;
}