// syntax of multiple INHERITANCE
// class Derived : visibility_mode base1,visibility_mode base{

// };

#include <iostream>
using namespace std;

class Base1
{
protected:
    int data1;

public:
    void set_data_base1(int value)
    {
        data1 = value;
    }
};
class Base2
{
protected:
    int data2;

public:
    void set_data_base2(int value)
    {
        data2 = value;
    }
};
class Derived : public Base1,public Base2{
    public:
    void show()
    {
        cout<<"The value of base 1 is "<<data1<<endl;
        cout<<"The value of base 2 is "<<data2<<endl;
        cout<<"The sum of these values is "<<data1+data2<<endl;
    }
};
int main()
{
    Derived shetty;
    shetty.set_data_base1(24);
    shetty.set_data_base2(25);
    shetty.show();
    return 0;
}