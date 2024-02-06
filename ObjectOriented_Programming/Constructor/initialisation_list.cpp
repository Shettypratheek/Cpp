/*
Synatx for iinitialisation list in condtructor :
constructor(aruments-list):initialisation section
{
    assignment+other code;
}
*/

#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(a+j)
    {
        cout << "Constructor executed" << endl;
        cout << "Value of a and b is " << a << " ," << b << endl;
    }
};
int main()
{
    Test one(4, 7);
    return 0;
}