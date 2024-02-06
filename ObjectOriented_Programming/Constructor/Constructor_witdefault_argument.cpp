// Constructor will be having some defualt arguments


#include <iostream>
using namespace std;

class Simple{
    int data1,data2;
    public:
    Simple(int a,int b=0){
        data1=a;
        data2=b;
    }
    void printValue(void){
        cout<<"The value of data1 and data2 is "<<"("<<data1<<" , "<<data2<<")."<<endl;
    }
};
int main()
{
    Simple ob1(10,12);
    ob1.printValue();

    Simple ob2(10);
    ob2.printValue();

    Simple ob3(4);
    ob3.printValue();
    return 0;
}

/*
1.Point to be always all the paramter cannot have default value
2.You Cannot have default value for the first paramter and normal to the second one.
Writing is possible giving input to that pattern is not possible.
*/