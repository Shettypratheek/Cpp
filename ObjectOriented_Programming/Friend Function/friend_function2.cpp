// Using friend fumction btwn different classes

#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setValue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
    int num;

public:
    void setValue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "The sum of the two classes is :" << o1.data + o2.num << endl;
}
int main()
{
    X ob1;
    Y ob2;

    ob1.setValue(4);
    ob2.setValue(6);

    add(ob1, ob2);
    return 0;
}