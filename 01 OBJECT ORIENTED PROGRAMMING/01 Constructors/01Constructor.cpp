#include<iostream>
using namespace std;

class Student{

    public:
    string name;
    int roll; 
    float gpa;

    Student() // Constructor, automatically called when object of class is created.
    {
        cout << "hey world.";
    }
};

int main()
{
    Student obj1; 
    
}