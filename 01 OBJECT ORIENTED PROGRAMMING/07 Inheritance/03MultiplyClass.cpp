#include <iostream>
#include <string>
using namespace std;

class Me
{
    public:

    string name;
    int age; 
    int height;

    Me(string n, int a, int h)
    {
        name = n; 
        age = a;  
        height = h;
    }
}; 

class MyOtherClass {
  public:
    void written() { 
      cout << "Some content in another class." ;}
    }; 

class MeAgain : public Me
{
    
}; 

int main()
{
    Me m1("Ahmad" , 20 , 6);
}