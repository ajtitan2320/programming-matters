#include<iostream>
using namespace std;
int main()
{
    int Number,ans=0;
    cin>>Number;
    while(Number!=0){
        int Remainder = Number%10;
        if(ans>INT_MAX/10 || ans<INT_MIN/10){
            return 0;
        }
        ans = ans*10+Remainder;
        Number/=10;
    }
    cout<<ans;
    return 0;
}