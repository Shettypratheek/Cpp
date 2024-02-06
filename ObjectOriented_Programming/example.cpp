#include <iostream>
#include <string>
using namespace std;

class binary{
    string s;
public:
    void read();
    void chk_binary();
    void ones_complement();
    void display();
    void bin_to_deci();
};

void binary::read()
{
    cout<<"Enter the binary number:"<<endl;
    cin>>s;
}
void binary::chk_binary(){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    cout<<"Entered the binary number"<<endl;
}
void binary::ones_complement()
{
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0')
            s.at(i)='1';
        else
            s.at(i)='0';
    }
}
void binary::display()
{
    cout<<"Displaying the binary number"<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s.at(i);
    }
    cout<<"\n";

}
void binary::bin_to_deci()
{
    int i=s.length();
    int num,base=1,sum=0;
    int value;
    num=stoi(s);
    while ((num>0))
    {
        value=num%10;
        sum=sum+value*base;
        num=num/10;
        base=base*2;

    }
    
    cout<<"\n";
    cout<<sum;
    //cout<<"The binary to decimal of "<<s<<"is"<<sum;
}

int main()
{
    binary num;
    num.read();
    num.chk_binary();
    num.display();
    num.ones_complement();
    num.display();
    num.bin_to_deci();


    return 0;
}