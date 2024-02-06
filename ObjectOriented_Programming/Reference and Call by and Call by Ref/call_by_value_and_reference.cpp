#include <iostream>
using namespace std;

//CALL BY REFERENCE USING POINTERS
void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
//CALL BY REFERENJCE USING REFERENCE VARIABLE
void swapbyreference(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=4,y=10;
    cout<<"The value of x and y before swap is "<<x<<" and "<<y<<endl;
    swapbyreference(x,y);
    cout<<"The value of x and y before swap is "<<x<<" and "<<y<<endl;

    return 0;
}