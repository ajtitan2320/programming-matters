#include<iostream>
#include<math.h>
using namespace std;
int binary(long long n){
    int ans=0,i=0;
    while(n!=0){
        int r=n%2;
        ans=ans+(pow(10,i)*r);
        n=n/2;
        i++;
    }
    cout<<ans;
    return ans;
}
bool checkPalindrome(long long N)
{
    long long bin=binary(N);
    return true;

}

int main()
{
    long long n;
    cin>>n;
    bool ans=checkPalindrome(n);
    cout<<endl<<ans;
    return 0;
}