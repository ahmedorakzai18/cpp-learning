#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 20, 25, 30};

    int n = 8;
    int target = 16;

    int left = 0;
    int right = n - 1;

    while(left <= right)
    {
        // Find the middle element
        int mid = (left + right) / 2;
        if(arr[mid] == target)
        {
            cout << "Found!";
            break;
        }
        else if(arr[mid] < target)
        {
            // Search the right half
            left = mid + 1;
        }
        else
        {
            // Search the left half
            right = mid - 1;
        }
    }
}