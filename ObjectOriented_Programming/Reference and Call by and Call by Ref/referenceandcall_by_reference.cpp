#include <iostream>
using namespace std;

class c2;

class c1
{
    int data;

public:
    void setValue(int a)
    {
        data = a;
    }
    void display()
    {
        cout << "The value is " << data << endl;
    }
    friend void exchange(c1 &, c2 &);
};

class c2
{
    int value;

public:
    void setValue(int a)
    {
        value = a;
    }
    void display()
    {
        cout << "The value is " << value << endl;
    }
    friend void exchange(c1 &, c2 &);
};
void exchange(c1 &a, c2 &b)
{
    int temp = a.data;
    a.data = b.value;
    b.value = temp;
}
int main()
{
    c1 ob1;
    c2 ob2;

    ob1.setValue(25);
    ob1.display();

    ob2.setValue(23);
    ob2.display();

    exchange(ob1, ob2);
    cout << "After swap" << endl;
    ob1.display();
    ob2.display();
    return 0;
}