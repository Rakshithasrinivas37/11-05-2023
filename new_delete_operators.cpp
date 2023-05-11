#include<iostream>

using namespace std;

int main()
{
    int *ptr1 = new int;
    *ptr1 = 37;
    char *ptr2 = new char('A');
    
    
    cout << "Value of ptr1: " << *ptr1 << endl;
    cout << "Value of ptr2: " << *ptr2 << endl;
    
    //Allocating memory for array using new
    int *ptr3 = new int[5];
    
    for(int i = 1;i <= 5; i++)
    {
        *(ptr3 + i) = i;
    }
    cout << "Values in array are: ";
    for(int i = 1;i <= 5;i++)
    {
        cout << *(ptr3 + i) << " ";
    }
    delete ptr1;
    delete ptr2;
    delete[] ptr3;
    
}
