#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_BASE;
     virtual  void display()
        {
            cout<<"The value of var_base is: "<<var_BASE<<endl;
        }
};
class DerivedClass:public BaseClass{
    public:
    int var_derived;
    void display()
    {
          cout<<"The value of var_base is: "<<var_BASE<<endl;
        cout<<"The value of var_derived is: "<<var_derived<<endl;
    }
};

int main()
{
    BaseClass *base_class_ptr;

    DerivedClass obj_derived;

    base_class_ptr=&obj_derived;
    base_class_ptr->var_BASE=25;
    base_class_ptr->display();

    return 0;
}