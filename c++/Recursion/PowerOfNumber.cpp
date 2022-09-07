#include<iostream>
using namespace std;
int Power(int n,int a){
    if(a==0){
        return 1;
    }
    if(a==1){
        return n;
    }
    int ans = Power(n,a/2);
    if(a%2==0){
        return ans*ans;
    }
    else{
        return a*ans*ans;
    }
}
int main()
{
    int n,a;
    cout<<"Enter the number = ";
    cin>>n;
    cout<<"Enter the power = ";
    cin>>a;
    int ans=Power(n,a);
    cout << ans << endl;
    return 0;
}