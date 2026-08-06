#include <iostream>
using namespace std;
int main()
{   int arr[] = {1, 2, 3, 4};
    int n = 4;

    // Compare every element with every other element
    // Mostly happen in nested loops

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << arr[i] << " " << arr[j] << endl;
        }
    }
}