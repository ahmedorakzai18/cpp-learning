// We Use Continue Statment when we wanna skip something in the Loop 

#include<iostream>
using namespace std; 
int main()
{
    int n; 
    cout << "Enter the Number: "; 
    cin >> n; 

    for(int i=1; i<=n; i++){ 
        if(i==3 || i==8) continue;
    cout <<  i << " " ; 

}

}