#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            if(j<=i)
            cout<<j;
            else
            cout<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}