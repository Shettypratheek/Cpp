
/*
                                    student
                                       |
                        _______________|_________________
                       |                                 |
                       |                                 |
                       V                                 V
                      Test                             Sports
                       |                                 |
                       |_________________________________|
                                        |
                                        V
                                      Result

*/

#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_no;

public:
    void set_number(int num)
    {
        roll_no = num;
    }
    void print_num(void)
    {
        cout << "Your roll number is " << roll_no << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float marks1, float marks2)
    {
        maths = marks1;
        physics = marks2;
    }
    void display_marks(void)
    {
        cout << "Your result is here: "<<endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float marks)
    {
        score = marks;
    }
    void print_score(void)
    {
        cout << "Your PT score is: " << score << endl;
    }
};
class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;

        print_num();
        display_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    Result shetty;
    shetty.set_number(231039005);
    shetty.set_marks(70,78);
    shetty.set_score(90);
    shetty.display();

    return 0;
}
//if we dont put virtual the compiler will be confused which set
//  number shud i choose from test or sports so by using virtual
//   only one copy will be inherited