#include<iostream>
using namespace std; 

class Employee
{
    private:
    int salary; 

    public:
    string name; 
    int Join; 

    Employee(string n, int j , int s)
    {
        name = n ;
        Join = j ; 
        salary = s ;  
    }   

    friend void display(Employee e); 
};

void display(Employee e)
{
    cout << "Salary : " << e.salary; 
}

int main()
{
    Employee e1("Frank" , 2019, 103000);

    cout << "Name: " << e1.name << endl; 
    cout << "Joining Year: " << e1.Join << endl; 
    cout << endl; 

    display(e1);     
}