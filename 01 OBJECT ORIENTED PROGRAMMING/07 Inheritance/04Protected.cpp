#include<iostream>
using namespace std; 

class Employee
{
    protected:
    int salary; 
};

class Programmer : public Employee
{
    public:
    string name; 
    int Joining; 

    Programmer(string name, int Joining)
    {   
        this->name = name; 
        this->Joining = Joining; 
    }

    void getsalary()
    {
        cout << "salary is: " << salary;
    }

    void setsalary(int s)
    {
        salary = s; 
    }
}; 

int main()
{
    Programmer p1("Eddard" , 2011); 


    p1.setsalary(140890); 


    cout << "name of programmer 1 : " << p1.name << endl; 
    cout << "Programmer 1 joined the firm in: " << p1.Joining << endl; 
    p1.getsalary(); 
}