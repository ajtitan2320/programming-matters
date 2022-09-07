#include<iostream>
using namespace std;
bool IsPrime(int n){
    for(int i = 2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int CountPrime(int n){
    int Count = 0;
    for(int i = 2;i<=n;i++){
        if(IsPrime(i)){
            Count++;
        }
    }
    return Count;
}
int main()
{
    int n;
    cin>>n;
    int ans=CountPrime(n);
    cout<<endl<<ans<<endl;
    return 0;
}