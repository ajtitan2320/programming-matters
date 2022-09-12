#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    //sort(s.begin(),s.end());
    int c=1;
    int m=0;
    for(int i=1;i<s.length();i++){
        if(s[i]==s[i-1]){
            c++;
        }
        else{
            if(m<c){
                m=c;
            }
            c=1;
        }
    }
    m = max(m,c);
    cout<<m;
    return 0;
}