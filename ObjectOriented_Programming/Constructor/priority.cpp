#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1(void){
    cout<<"The value of data-Base1 is "<<data1<<endl;

    }
};
class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2(void){
    cout<<"The value of data-Base2 is "<<data2<<endl;

    }
};
class Derived :public Base1,public Base2{
    int value1,value2;
    public:
    Derived(int a,int b,int c,int d): Base1(a),Base2(b){
        value1=c;
        value2=d;
                cout << "Derived class constructor called" << endl;

    }
    void printDataDerived(){
        cout<<"The value of value1 is:"<<value1<<endl;
        cout<<"The value of value2 is:"<<value2<<endl;
    }
};
int main()
{
    Derived shetty(2,3,4,5);
    shetty.printDataBase1();
    shetty.printDataBase2();
    shetty.printDataDerived();
    return 0;
}