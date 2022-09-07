#include<iostream>
#include<math.h>
using namespace std;
bool power(int n){
        int i=0,f=0;
        while(f==0 && i<=30){
            int s=pow(2,i);
            if(s==n){
                return true;
                f=1;
            }
            i++;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    bool c=power(n);
    cout<<(bool)c;
    return 0;
}