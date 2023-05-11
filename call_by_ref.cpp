#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int swap = *a;
    *a = *b;
    *b = swap;
}

int main()
{
    int a = 5, b = 10;
    swap(&a, &b);
    cout << "Value of a = " << a << endl;
    cout << "Value of b = " << b << endl;
    
    return 0;
}
