#include<iostream>
using namespace std;

class Car{

    private:
    int price; 

    public:

    Car(int p) {
      price = p;
    }

    friend void display(Car c1);
};

void display(Car c1) {
  cout << "Price: " << c1.price;
}

int main()
{
Car c1(50000);
  display(c1);
  return 0;
}