#include<iostream>
#include<math.h>
using namespace std;
int octal(int n){
    int r,ans=0,i=0;
    while(n!=0){
        r=n%8;
        ans=ans+pow(10,i)*r;
        n=n/8;
        i++;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int c=octal(n);
    cout<<c;
    return 0;
}