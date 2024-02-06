// use of static variable in c++
/*Ones the static variable is declared inside the class it must declared ones again outside the class and static varible is the property of class not the object*/

#include <iostream>
using namespace std;

class Employee
{
    int id;
   static  int count;

public:
    void setData()
    {
        cout << "Enter the id " << endl;
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "The id of this employee is " << id << " and this employee number is " << count << endl;
    }
    static void getcount()
    {
        cout<<"The value of count is "<<count<<endl;
    }
};
int Employee::count=1000;
int main()
{
    Employee shetty,pinku;
    
    shetty.setData();
    shetty.getData();
    Employee::getcount();
   

    pinku.setData();
    pinku.getData();
     Employee::getcount();
    

    return 0;
}