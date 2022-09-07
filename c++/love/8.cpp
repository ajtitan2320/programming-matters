#include<iostream>
using namespace std;
int main()
{
    int n,i=1,h=97;
    cin>>n;
    
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<(char)h;
            j++;
        }
        h++;
        i++;
        cout<<endl;
    }
    return 0;
}