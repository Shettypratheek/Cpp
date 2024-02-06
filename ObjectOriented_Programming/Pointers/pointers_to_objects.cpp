#include <iostream>
using namespace std;

class Complex{
    int real,imaginary;
    public:
    void set_data(int value1,int value2)
    {
        real=value1;
        imaginary=value2;
    }
void get_data(void){
    cout<<"The real part is "<<real<<endl;
    cout<<"The imaginary part is "<<imaginary<<endl;
}
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr=new Complex;
    // (*ptr).set_data(25,43); //the need of bracket is the precedence of dot operator is more than * operator
    // (*ptr).get_data();

    // //This is as good as (*ptr).set_data(100,200);
    // ptr->set_data(100,200);
    // ptr->get_data();
    Complex *ptr1=new Complex[4];
    ptr1->set_data(100,101);
    (ptr1+1)->set_data(102,103);
    (ptr1+2)->set_data(105,106);
    (ptr1+3)->set_data(107,108);
    for(int i=0;i<4;i++)
        (ptr1+i)->get_data();
    return 0;
}