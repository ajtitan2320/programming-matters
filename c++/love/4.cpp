#include<iostream>
using namespace std;
int main(){
    int a,n=2,c=0;
    cin>>a;
    while(n<=a){
        if(a%n==0)
        c=1;
        break;
    }
    if(c==0){
        printf("prime number");
    }
    else{
        printf("not a prime number");
    }
}