// #include<iostream>
// #include<math.h>
// using namespace std;
// int decimal(int n){
//     int r,i=0,ans=0;
//     while(n!=0){
//         r=n%10;
//         ans=ans+(pow(2,i)*r);
//         n=n/10;
//         i++;
//     }
//     return ans;
// }
// int binary(int n){
//     int r,i=0,answer=0;
//     while(n!=0){
//         r=n%2;
//         answer=answer+(pow(10,i)*r);
//         n=n/2;
//         i++;
//     }
//     return answer;
// }
// int comp(int n){
//     int r,a=1,b=0,i=0,c,ans;
//     n=binary(n);
//     cout<<n;
//     while(n!=0){
//         r=n%10;
//         if(r==1){
//             c=0;
//         }
//         else{
//             c=1;
//         }
//         ans=ans*10+c;
//         n=n/10;
//         i++;
//     }
//     ans=decimal(ans);
//     return ans;
// }
// int main()
// {
//     int n;
//     cin>>n;
//     int c=comp(n);
//     cout<<c;
//     return 0;
// }








#include<iostream>
using namespace std;
int bitwiseComplement(int n) {
    int m=n;
    int mask=0;
    if(m==0){
        return 1;
    }
    while(m!=0){
        mask=(mask<<1) | 1;
        m=m>>1;
    }
    int ans= (~n) & mask;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int c=bitwiseComplement(n);
    cout<<c;
    return 0;
}

