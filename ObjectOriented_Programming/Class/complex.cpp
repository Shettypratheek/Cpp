#include <iostream>
using namespace std;
class Complex{
    int a,b;
    public:
    void setNum(int v1,int v2){
        a=v1;
        b=v2;
    }
    void printdata()
    {
        cout<<"Your number is "<<a<<"+"<<b<<"i"<<endl;
    }
    void printsum(Complex o1,Complex o2)
    {
        a=o1.a+o2.a;
        b=o1.b+o2.b;
        cout<<"The sum of two complex number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main()
{
    Complex c1,c2,c3;
    c1.setNum(2,3);
    c1.printdata();

    c2.setNum(3,4);
    c2.printdata();

    //sum of two complex  number is

    c3.printsum(c1,c2);

    return 0;
}