#include<iostream>
using namespace std; 

class Student
{
    public:
    int roll; 
    string name; 
    float gpa;
    
    // default constructor

    Student()
    {
        name = "Unknown"; 
        roll = 0;
        gpa = 0.00;
    }

    //parameterized constructor

    Student(string name, int roll, float gpa)
    {
        this->name = name; 
        this->roll = roll; 
        this->gpa = gpa; 
    }

        Student(string name, float gpa)
    {
        this->name = name; 
        this->gpa = gpa; 
    }

    void display()
    {
        cout << "Name of the student is: " << name << endl; 
        cout << "roll of the student is: " << roll << endl; 
        cout << "gpa of the student is: " << gpa << endl; 
    }
};

int main()
{
    Student s1("zia",2,2.5); 

    Student* S2 = new Student("ali",4,12.2) ;  // Dynamic Allocation
    cout << S2->name; 
}