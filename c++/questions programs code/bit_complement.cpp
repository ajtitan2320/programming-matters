#include<iostream>
using namespace std;
int comlement(int n){
    int Temp = n;
    int Mask=0;
    while(Temp!=0){
        Mask=(Mask<<1) | 1;
        Temp=Temp>>1;
    }
    int ans= (~n) & Mask;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int c=comlement(n);
    cout<<c;
    return 0;
}