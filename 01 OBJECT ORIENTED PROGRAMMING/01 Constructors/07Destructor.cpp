#include<iostream>
using namespace std; 

class Student
{
    public: 
    Student()
    {
        cout << "This is a constructor.\n"; 
    }

   ~Student()
    {
        cout << "This is a Destructor.\n"; 
    }
};

int main()
{
 Student s;

 cout << "this is main\n"; 
}