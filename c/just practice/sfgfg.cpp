#include<bits/stdc++.h>
using namespace std;
void check(int n){
    int i=1,f=0;
    while(i*(i+1)<n*2){
        int a=i*(i+1);
        int b=n*2-a;
        int c=sqrt(b);
        if(c*(c+1)==b){
            f=1;
            break;
        }
        i++;
    }
    if(f==1){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}
int main() {

int n;
	cin>>n;
    check(n);
}