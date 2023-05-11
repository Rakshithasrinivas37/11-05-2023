#include <iostream>

using namespace std;
class add_sub
{
    int a = 7, b = 3, sum, diff;
    
    public:
    void add();
    void sub();
    
};

inline void add_sub::add()
{
    sum = a + b;
    cout << "Sum = " << sum << endl;
}

inline void add_sub::sub()
{
    diff = a - b;
    cout << "Diff = " << diff << endl;
}
int main()
{
    add_sub opt;
    opt.add();
    opt.sub();
}
