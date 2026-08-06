#include<iostream>
using namespace std; 

class Student
{
  public: // Can be accessed through main and anyone can change it.

  string name; 
  int roll ;

};

int main()
{
  Student s1; 
  s1.name = "Mazhar"; 
  s1.roll = 1; 

  cout << s1.name << endl; 
  cout << s1.roll << endl; 

}