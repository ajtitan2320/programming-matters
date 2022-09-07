#include<iostream>
using namespace std;
int main()
{
    int a,i=2,s=0;
    cin>>a;
    while(i<=a){
        s=s+i;
        i=i+2;
    }
    cout<<s;
    return 0;
}