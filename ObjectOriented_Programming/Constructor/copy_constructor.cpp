#include <iostream>
using namespace std;
class Number{
    int a;
    public:
    Number(void){
        a=0;
    }
    Number (int x)
    {
        a=x;
    }
    //WHEN NO COPY CONSTRUCTOR IS FOUND COMPILER SUPPLIES ITS OWN COPY CONSTRUCTOR
    // Number(Number &obj)//copy consructor which will act as another constructor
    // {
    //     a=obj.a;
    // }
    void display(void)
    {
        cout<<"Your numer is "<<a<<endl;
    }
};
int main()
{
    Number num1,num2,num3(24);
    num3.display();

    num1=Number(21);
    num1.display();
    
    Number num4(num1);
    num4.display();

    return 0;
}