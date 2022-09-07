#include<iostream>
using namespace std;
int sqrtmy(int n){
    int s=0,e=n,ans=0;
    long long int m;
    while(s<=e){
        m=s+(e-s)/2;
        if(m * m == n){
            return m;
        }
        else if(m * m > n){
            e=m-1;
        }
        else{
            ans = m;
            s=m+1;
        }
    }
    return ans;
}
double prec(int p,int square_root,int n){
    double factor = 1;
    double ans = square_root;
    for(int i=0 ; i<=p ; i++){
        factor /=10;
        for(double j=ans ; j * j<n ;j+=factor){
            ans=j;
        } 
    }
    return ans;
    
}
int main()
{
    int n,p;
    cin >> n ;
    cout << "Enter the precise value upto which you want = ";
    cin >> p;
    int square_root = sqrtmy(n);
    cout << square_root << endl;
    double precise = prec(p,square_root,n);
    cout << precise << endl;
    return 0;
}