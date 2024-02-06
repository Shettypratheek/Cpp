// Ambiguity rises when a class is derived from two base class amd these two bases
// classes have fiunction doing some task. It will run normal when we create
// object of that class and run but Ambuity arises in derived class when we
// create a object of derived class and call that function which is similar
// in both the base class there arise ambiguity.

#include <iostream>
using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Hello how are you??" << endl;
    }
};
class Base2
{
public:
    void greet(void)
    {
        cout << "kaise hai hoo??" << endl;
    }
};
class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet(); //Ambiguity resolution 
    }
};
int main()
{
    //Ambiguity 1
    // Base1 obj1;
    // obj1.greet();

    // Base2 obj2;
    // obj2.greet();

    // Derived obj;
    // obj.greet();
    return 0;
}   