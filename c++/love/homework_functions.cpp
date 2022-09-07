// 1


// #include<iostream>
// using namespace std;
// int ap(int b){
//     int s=3*b+7;
//     return s;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int a=ap(n);
//     cout<<a;
//     return 0;
// }


// 2


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
int count(int a){
    int c=0;
    int t=binary1(a);
    while(t!=0){
        int r=t%10;
        if(r==1){
            c++;
        }
        t=t/10;
    }
    return c;
}
int main()
{
    int a,b;
    cin>>a>>b;
    int c1=count(a);
    int c2=count(b);
    cout<<c1+c2;
    return 0;
}