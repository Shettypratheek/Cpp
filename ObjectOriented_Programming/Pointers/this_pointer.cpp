#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void set_data(int a)
    {
        this->a = a;
    }
    void getData(void)
    {
        cout << "The value of a is: " << a << endl;
    }
};
int main()
{   
    A a;
    a.set_data(3);
    a.getData();
    return 0;
}