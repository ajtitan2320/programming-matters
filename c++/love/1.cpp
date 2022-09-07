#include<iostream>
using namespace std;
int main()
{
    // 97      122     65      90      48      57
    char a;
    cin>>a;
    if(a>=97 && a<=122)
    cout<<"small case";
    else if(a>=67 && a<=90)
    cout<<"upper case";
    else if(a>=48 && a<=57)
    cout<<"integer";
    else
    cout<<"special character";
    return 0;
}