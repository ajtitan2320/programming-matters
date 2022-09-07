#include<iostream>
using namespace std;
int main()
{
    int a=0,b=1,c,s=0,n;
    cin>>n;
    cout<<0<<" "<<1<<" ";
    for(int i=0;i<n;i++){
        s=a+b;
        cout<<s<<" ";
        c=b;
        b=s;
        a=c;
    }
    return 0;
}