#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]++;
    }
    int c=0;
    for(auto i:mp){
        if(i.second%2!=0){
            c++;
        }
    }
    if(c>1){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
    return 0;
}