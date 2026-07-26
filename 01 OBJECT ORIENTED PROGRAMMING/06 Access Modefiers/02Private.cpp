#include<iostream>
using namespace std;

class Employee
{
private:        // cannot be accessed from outside the class
double salary; 

public: 
string name; 
int JoinYear; 

Employee(string name, int JoinYear)
{
    this->name = name; 
    this->JoinYear = JoinYear; 
}

};
int main()
{
    Employee e1 = {"Fawad",2018}; 
    // e1.salary = 100000;  WILL RETURN ERROR.

}