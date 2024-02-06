#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
    int a, b;

public:
    void getData(void)
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b" << endl;
        cin >> b;
    }
    void performOperation()
    {
        cout << "The value of a+b is: " << a + b << endl;
        cout << "The value of a-b is: " << a - b << endl;
        cout << "The value of a*b is: " << a * b << endl;
        cout << "The value of a/b is: " << a / b << endl;
    }
};
class ScientificCalcultor
{
    int a, b;

public:
    void getdatascientific()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
    void performOperationscientific()
    {
        cout << "sin(" << a << "):" << sin(a) << endl;
        cout << "cos(" << a << "):" << cos(a) << endl;
        cout << "exp(" << a << "):" << exp(a) << endl;
        cout << "tan(" << a << "):" << tan(a) << endl;
    }
};
class HybridCalculator : public SimpleCalculator,public ScientificCalcultor{

};
int main()
{
    // SimpleCalculator cal;
    // cal.getData();
    // cal.performOperation();

    HybridCalculator calc;
    calc.getdatascientific();
    calc.performOperationscientific();

    return 0;
}
