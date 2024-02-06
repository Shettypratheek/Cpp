// CREATING CONSTRUCTOR
// CONSTRUCTOR IS A SPECIAL MEMBER FUNCTION WITH SAME NAME AS OF THE CLASS
// IT IS USED TO INITIALISE THE OBJECT OF ITS CLASS.
// IT AUTOMATICALLY INVOKED WHENEVER AN OBJECT IS CREATED.

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
    Complex(void);
    void print(void)
    {
        cout << "The complex num is " << a << " + " << b << "i " << endl;
    }
};
// Both are valid
Complex ::Complex(void) //-------->This defualt constructor and it takes no parameters
{
    a = 10;
    b = 20;
}
int main()
{
    Complex c1;
    c1.print();
    return 0;
}