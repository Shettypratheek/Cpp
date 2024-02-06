// creating array of objects

#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        salary = 1000;
        cout << "Enter the id of employee " << endl;
        cin >> id;
    }
    void getId()
    {
        cout << "The id of the employee is " << id << endl;
    }
};
int main()
{
    Employee ob[4];
    for (int i = 0; i < 4; i++)
    {
        ob[i].setId();
        ob[i].getId();
    }
    return 0;
}