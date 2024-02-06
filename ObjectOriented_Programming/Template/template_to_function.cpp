#include <iostream>
using namespace std;

//Template not only used for classes they can also be used for functions.
template<class T1,class T2>
float average(T1 num1,T2 num2)
{
    float avg=(num1+num2)/2;
    return avg;
}

template<class T>
void swapp(T &num1,T &num2)
{
    T temp=num1;
    num1=num2;
    num2=temp;
}
int main()
{
    float vale=average(5,'c');
    

    char x='c',y='w';
    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    swapp(x,y);

    cout<<"x="<<x<<endl<<"y="<<y<<endl;
    
    
    return 0;
}