#include<iostream>
using namespace std;
int square_root(int n){
    int s=0,e=n;
    long long int m=s+(e-s)/2,ans=0;
    while(s<=e){
        long long int sq=m*m;
        if(sq==n){
            return m;
        }
        else if(sq<n){
            ans=m;
            s=m+1;
        }
        else{
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
double precise(int c,int x,int p){
    double factor=1,ans=c;
    for(int i=0;i<p;i++){
        factor=factor/10;
        for(double j=ans;j*j<x;j+=factor){
            ans=j;
        }
    }
    return ans;
}
int main()
{
    int x,p;
    cin>>x;
    int c=square_root(x);
    cout<<"enter the value of points upto which you want answer = ";
    cin>>p;
    cout<<precise(c,x,p);
    return 0;
}