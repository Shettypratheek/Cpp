#include <iostream>
using namespace std;

/*
    template <class T1,class T2>

    class nameofClass{

        //Body 
    };
*/
template<class T1,class T2 >
class myClass{
    public:
        T1 data1;
        T2 data2;
        myClass(){}
        myClass(T1 data1,T2 data2){
            this->data1=data1;
            this->data2=data2;
        }
        void display(){
            cout<<data1<<endl<<data2<<endl;
        }
};
int main()
{
    myClass <int,float> obj;
  obj =myClass <int,float>(2,3.5);
  obj.display();
    return 0;
}