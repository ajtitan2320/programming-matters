#include<iostream>
using namespace std;
int main()
{
    int t,n;
    string s;
    cin>>n>>t;
    cin>>s;
    while(t--){
        for(int i=1;i<n;i++){
            if(s[i-1]=='B' && s[i]=='G'){
                swap(s[i-1],s[i]);
                i++;//for next value in string
            }
        }
    }
    cout<<s;
    return 0;
}