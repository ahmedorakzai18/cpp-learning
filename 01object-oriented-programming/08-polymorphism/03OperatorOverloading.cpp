#include <iostream>
using namespace std;

class Box
{
public:
    int length;

    Box(int l)
    {
        length = l;
    }

    Box operator+(Box other)
    {
        return Box(length + other.length);
    }
};

int main()
{
    Box b1(10);
    Box b2(20);

    Box b3 = b1 + b2;

    cout << "Length: " << b3.length << endl;

    return 0;
}