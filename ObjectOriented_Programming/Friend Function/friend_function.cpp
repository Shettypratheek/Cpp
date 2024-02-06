//USE OF FRIEND FUNCTION

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
        cout<<"The complex number is "<<a<<" + "<<b<<"i"<<endl;

    }
    friend Complex sumcomplex(Complex o1,Complex o2);
};
Complex sumcomplex(Complex o1,Complex o2)
{
    Complex o3;
    o3.setNum((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}
int main()
{
    Complex c1,c2,sum;
    c1.setNum(12,13);
    c1.printdata();

    c2.setNum(31,41);
    c2.printdata();
    sum=sumcomplex(c1,c2);
    sum.printdata();
    return 0;
}