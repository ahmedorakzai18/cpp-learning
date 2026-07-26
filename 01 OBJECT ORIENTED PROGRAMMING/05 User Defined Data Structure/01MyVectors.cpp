#include<iostream>
#include<vector>

using namespace std; 

class Vector
{
    public:
    int size; 
    int capacity; 
    int*arr; 

    Vector()
    {
        size = 0; 
        capacity = 1; 
        arr = new int[1]; 
    }

    void add(int ele)
    {
        if(size == capacity)
        {
            capacity*=2; 
            int* arr2 = new int[capacity]; 

            for(int i=0; i<size; i++)
            {
                arr2[i] = arr[i]; 
            }   
            arr = arr2; 
        }
        arr[size++] = ele; 
        }

        void display()
        {
            for(int i=0; i<size; i++)
            {
                cout << arr[i] << " "; 
            }   
            cout << endl; 
        }
}; 

int main()
{
    Vector v1;
    
    v1.add(21); 
    v1.display(); 
    v1.add(221); 
    v1.display(); 
    v1.add(211); 
    v1.display(); 
}