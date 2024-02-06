#include <iostream>
using namespace std;

template<class T>
class Shetty{
    public:
    T data;
    Shetty(T data){
        this->data=data;
    }
    void display();
    };
template<class T>
void Shetty<T>:: display()
{
    cout<<data<<endl;
}
int main()
{
    Shetty<int> obj(10);
    cout<<obj.data<<endl;

    obj.display();
    return 0;
}