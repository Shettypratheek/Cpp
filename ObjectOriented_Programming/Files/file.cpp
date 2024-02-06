#include <iostream>
#include <fstream>
using namespace std;

/*
    The usefull classes for working with files in C++ are:
    1. fstreambase
    2.ifstream --> derived from fstreambase
    3.ofstream --> derived from fstreambase
*/
// In order work with files in c++,you will have to open it. Primarily, there are 2 wayts to open a file:
    // 1.Using the constructor.
    // 2.Using the member function open() of the class.
int main()
{
    //Opening a file using constructor
    // ofstream out("sample.txt");
    // out<<"Hello Everyone";

    ifstream in("sample.txt");
    string str;
    
    getline(in,str);
    cout<<str;

    return 0;
}