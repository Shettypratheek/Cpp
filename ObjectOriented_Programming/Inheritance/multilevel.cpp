/*
Foa a protected member:
                            Public Derivation    Private Derivation     Protected Derivation
    1. Private members          Not Inherited       Not Inherited             Not Inherited
    2. Protected members        Protected           Private                   Protected
    3. Public members           Public              Private                   Protected

*/

#include <iostream>
#include <iomanip>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student ::set_roll_number(int number)
{
    roll_number = number;
}
void Student ::get_roll_number(void)
{
    cout << "The roll of the student is " << roll_number << endl;
}
class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam ::get_marks()
{
    cout << "The marks obtained in maths   are " << setw(3)<<maths << endl;
    cout << "The marks obtained in physics are " << setw(3)<<physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout <<"Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{

    Result shetty;
    shetty.set_roll_number(231039005);
    shetty.set_marks(100,92);
    shetty.display_result();

    return 0;
}