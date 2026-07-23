#include<iostream>
using namespace std; 

class Greet{
    public:

    void insideMethod()
    {
        cout << "Hello and Good Morning.";
    }
};

int main()
{
Greet obj1; 
obj1.insideMethod(); 

}