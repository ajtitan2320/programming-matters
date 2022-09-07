#include<iostream>
#include<math.h>
using namespace std;
int binary1(int n){
    int r,i=0,answer=0;
    while(n!=0){
        r=n%2;
        answer=answer+(pow(10,i)*r);
        n=n/2;
        i++;
    }
    return answer;
}
int binary2(int n){
    int r,i=0,answer=0;
    while(n!=0){
        r=n&1;
        answer=answer+(pow(10,i)*r);
        n=n>>1;
        i++;
    }
    return answer;
}
int main()
{
    int n,c,d;
    cin>>n;
    c=binary1(n);
    d=binary2(n);
    cout<<c<<" "<<d;
    return 0;
}