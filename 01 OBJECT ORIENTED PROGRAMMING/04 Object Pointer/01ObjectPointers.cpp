#include<iostream>
using namespace std; 

class Employee
{
    public:
    string Name; 
    int JoinYear; 

    Employee(string N, int JY)
    {
        Name = N; 
        JoinYear = JY; 
    }
};

int main()
{
    Employee e1("Robin",2015);
    Employee e2("John",2003);

    Employee* ptr = &e1;

    cout << (*ptr).Name << endl; 

}