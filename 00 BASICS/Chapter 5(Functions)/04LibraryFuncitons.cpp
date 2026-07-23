#include <iostream>
#include <cmath>
#include <cctype>
using namespace std; 

int main()
{
    int n; 
cout << "SquareRoot Number is: " ; 
cin >> n;
cout << sqrt(n); 

cout << endl;

cout << "CubeRoot Number is: "; 
cin >> n; 
cout << cbrt(n) << endl;
int a,b; 

cout << "Enter First Number for Power: " ; 
cin >> a; 

cout << "Second NUMber Raised to Power: " ; 
cin >> b; 

cout << "Power of your number is: "; 
cout << pow(a,b) << endl;

int x;
cout << "Enter you Number for Absolute Value: "; 
cin >> x; 
cout << abs(x) << endl; 

char UC; 
cout << "Enter the lower Case to convert: " ;
cin >> UC ;
cout << toupper(UC); 
cout << endl; 

char LC; 
cout << "Enter the Upper Case for Ascii Value: " ;
cin >> LC;
cout << tolower(LC); 
cout << endl; 
}