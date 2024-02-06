#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    //     ofstream out;
    //     out.open("sample.txt");
    // out<<"Hello its me Pratheek Shetty"<<endl;

    // out.close();

    ifstream in;
    in.open("sample2.txt");
    string str;
    in >> str;
    
    while (in.eof()=='\0'){
        getline(in, str);
        cout << str<<endl;
      
    }

    return 0;
}