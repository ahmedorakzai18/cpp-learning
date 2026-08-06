// TBH THIS IS VERY BS. I DIDNT EVEN DRY RUN THIS 

#include<iostream>
using namespace std; 

int Power(int bs, int ex)
{
    if(ex == 0) return 1; 

    return bs * Power(bs,ex -1); 

}

int main()
{
int a,b;
cout << "Enter Base: "; 
cin >> a; 


cout << "Enter Exponent: "; 
cin >> b; 

cout << Power(a,b); 

}

