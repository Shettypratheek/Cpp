#include <iostream>
using namespace std;

class BankDesposit{
    int principal;
    int year;
    float interestRate;
    float returnValue;
    public:
    BankDesposit(void){}// Default constructor is needed beacuse when object is created compiler will search for constructor to be matched
    BankDesposit(int p,int y,float r);
    BankDesposit(int p,int y,int r);
    void show();

};
BankDesposit ::BankDesposit(int p,int y,float r)
{
    principal=p;
    year=y;
    interestRate=r;
    returnValue=principal;
    for(int i=0;i<year;i++)
        returnValue=returnValue*(1+interestRate);

}
BankDesposit::BankDesposit(int p,int y,int r)
{
    principal=p;
    year=y;
    interestRate=float(r)/100;
    returnValue=principal;
    for(int i=0;i<year;i++)
        returnValue=returnValue*(1+interestRate);

}
void BankDesposit ::show()
{
    cout<<"The principal amount was "<<principal<<endl
        <<"Number of year depositing was "<<year<<endl
        <<"Return for "<<year<<" year is "<<returnValue<<endl;
        cout<<endl;

}

int main()
{
    BankDesposit user1,user2,user3;
    int principalAmount,year;
    float interest;
    int interest_r;
    cout<<"Enter your principal amount year and rate"<<endl;
    cin>>principalAmount>>year>>interest;
    user1=BankDesposit(principalAmount,year,interest);
    user1.show();

    cout<<"Enter your principal amount year and rate"<<endl;
    cin>>principalAmount>>year>>interest_r;
    user1=BankDesposit(principalAmount,year,interest_r);
    user1.show();
    return 0;
}