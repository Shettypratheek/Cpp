#include <iostream>
using namespace std;
int main()
{

    int a=4;
    int *ptr=&a;
    cout<<"The value of a is "<<*(ptr)<<endl;
    cout<<"The value of a is "<<(ptr)<<endl;

    //new operator
    int *p=new int(4); //dynamically value 4 is assugned to the memory addres of p

    cout<<"The value strored at *p is "<<*p<<endl;
    cout<<"The value strored at *p is "<<p<<endl;

    int *arr=new int[4];
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    //delete opertator
    delete[] arr;
    for(int i=0;i<4;i++)
        cout<<arr[i]<<endl;


    return 0;
}