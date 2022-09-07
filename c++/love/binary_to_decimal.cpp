#include<iostream>
#include<math.h>
using namespace std;
int decimal(int n){
    int r,i=0,ans=0;
    while(n!=0){
        r=n%10;
        ans=ans+(pow(2,i)*r);
        n=n/10;
        i++;
    }
    return ans;
}
int main()
{
    int n,c;
    cin>>n;
    c=decimal(n);
    cout<<c;
    return 0;
}