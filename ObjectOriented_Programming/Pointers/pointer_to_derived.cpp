#include <iostream>
using namespace std;

class BaseClass{
    public:
    int var_BASE;
        void display()
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
    BaseClass *base_class_point;

    BaseClass obj_base;

    DerivedClass obj_derived;

    base_class_point=&obj_derived;
    //base_class_point->var_BASE=35;
    //base_class_point->display();
    
    DerivedClass *derivede_class_pointer=&obj_derived;

    derivede_class_pointer->var_derived=300;

    derivede_class_pointer->display();


    return 0;
}