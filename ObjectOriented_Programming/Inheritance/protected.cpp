#include <iostream>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived :protected Base{

};
int main()
{
    Base b;
    Derived d;
    /*
    cout<<b.a<<endl;//pops an error that a is protected. 
    when a is protected it will get inherited 
    but its not possible to access that variable out side the class */
    
    return 0;
}

/*
Foa a protected member:
                            Public Derivation    Private Derivation     Protected Derivation
    1. Private members          Not Inherited       Not Inherited             Not Inherited
    2. Protected members        Protected           Private                   Protected
    3. Public members           Public              Private                   Protected

*/