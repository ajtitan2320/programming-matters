#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long int arr[n];
    if(n==2 || n==3){
        cout<<"NO SOLUTION";
    }
    else if(n>4 || n==1){
        for(int i=1;i<=n;i+=2)
        cout<<i<<" ";
        for(int i=2;i<=n;i+=2)
        cout<<i<<" ";
    }
    else{
        cout<<"2 4 1 3";
    }
    return 0;
}