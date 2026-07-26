#include<iostream>
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
        name = n; 
        join = j; 
    }

    // Getter
    int getsalary()
    {
        return salary; 
    }

    // Setter
    void setsalary(int s)
    {
        salary = s ;
    }

};
    
int main()
{
    Employee e1("Afaq", 2019);
    
    e1.setsalary(150000); 
    
    cout << "Name: " << e1.name << endl; 
    cout << "Joining: " << e1.join << endl; 
    cout << "salary: " << e1.getsalary(); 
}