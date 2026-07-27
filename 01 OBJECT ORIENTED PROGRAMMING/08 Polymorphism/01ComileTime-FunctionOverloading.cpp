#include<iostream>
using namespace std; 

class Loading
{
    public:

    void sum(int a, int b)
    {
        cout << "sum: " << a+b; 
    }

    double sum(double a, double b)
    {
        return a+b ; 
    }

    int x(int a, int b)
    {
        return a+b ; 
    }
};

int main()
{
    Loading l1 ; 
    cout << l1.x(2.7,3.98); 
}