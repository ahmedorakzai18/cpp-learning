#include<iostream>
using namespace std; 

class Employee
{
    private: 
    double salary; 

    public: 
    string name;
    int joining; 

    //constructor

    Employee(string n, int j, double s)
    {
        name = n ;
        joining = j; 
        salary =  s; 
    }

    // Getter
    int getsalary()
    {
        return salary ;
    }
};

int main()
{
    Employee e1("Umar", 2019 , 150000); 

    cout << "salary is: " << e1.getsalary(); 
}