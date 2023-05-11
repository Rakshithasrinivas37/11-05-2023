#include <iostream>

using namespace std;

int add(int num1 = 5,int num2 = 10)
{
    return num1 + num2;
}

int main()
{
    int a, b;
    cout << "Enter value of a and b \n";
    cin >> a >> b;
    cout <<"Without passing arguments:"<< add() << endl;
    cout <<"With arguments:"<< add(a,b) << endl;
    cout <<"With passing only one argument:"<< add(a) << endl;
}