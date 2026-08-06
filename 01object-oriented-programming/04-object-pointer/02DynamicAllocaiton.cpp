// Dynamic Allocation would be helpful in Linked Lists(Treversal).

#include<iostream>
#include<string>

using namespace std; 

class Footballer
{
    public:
    string name; 
    int goals; 
    int matches; 

    Footballer(string n, int g, int m)
    {
        name = n; 
        goals = g; 
        matches = m; 
    }
}; 

int main()
{
    Footballer f1("cristiano", 978 ,943); 
    Footballer* f2 = new Footballer("messi", 942 ,825);  // Dynamic Allocation

    cout << f1.name << endl << f1.goals << endl << f1.matches << endl << endl; 

    cout << f2->name << endl << f2->goals << endl << (*f2).matches;
}