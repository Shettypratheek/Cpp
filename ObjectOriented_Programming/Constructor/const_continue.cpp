//PARAMETERISED CONSTRUCTOR

#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // Complex(void){
    //     a=10;
    //     b=20;
    // }
    Complex(int,int);
    void print(void)
    {
        cout << "The complex num is " << a << " + " << b << "i " << endl;
    }
};

Complex ::Complex(int x,int y) 
{
    a = x;
    b = y;
}
int main()
{
    //Implicit call
    Complex c1(2,3);
    c1.print();

    //Explicit call
    Complex b=Complex(5,6);
    b.print();
    return 0;
}