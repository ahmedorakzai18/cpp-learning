#include <iostream>
using namespace std; 

class Employee
{
    private:
    int salary;

    public:
    string name; 
    int join; 

    Employee(string n, int j)
    {
        join = j; 
        name = n; 
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
    Employee e1("Robin" , 2018);

    e1.setsalary(234322);
    
    
    e1.getsalary(); 

}