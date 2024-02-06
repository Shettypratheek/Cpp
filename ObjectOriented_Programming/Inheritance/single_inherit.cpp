// SINGLE INHERITANCE
// ----> a derived class from a single base class

#include <iostream>
using namespace std;
// Base class

class Employee
{
    float salary;

public:
    int id;
    Employee(void) {}
    Employee(int my_id)
    {
        id = my_id;
        salary = 200000;
    }
    void display(void)
    {
        cout << "Salaray of employee with id " << id << " is Rs." << salary << endl;
    }
};

//Syntax of derived class
/*
    {{class derived_class_name}} : {{visibility_mode}} {{base_class_name}}
    {
        class member/method/etc..
    }
Note:
1.Default visibilty mode will be private.
2.Public Visibility :Public member of the base class become the public member of the derived class.
3.Private Visibility:Public member of the base class become the private member of the derived class.
3.Private members are never inherited
*/
class Programmer :  Employee{ 
    public:
    int language=9;
    Programmer(int myid)
    {
        id=myid;
    }
    void getData(void)
    {
        cout<<id<<endl;
    }
};
int main()
{
    Employee ashok, Kumar;

    ashok = Employee(24);
    ashok.display();

    Kumar = Employee(93);
    Kumar.display();

    Programmer Minti(25);
    //cout<<Minti.language<<endl;
    cout<<Minti.id<<endl;
  //  Minti.display();
    return 0;
}