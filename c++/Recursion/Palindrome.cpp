#include<iostream>
#include<string>
using namespace std;
bool Check(string& str,int s,int e){
    if(s>e){
        return true;
    }
    if(str[s]!=str[e]){
        return false;
    }
    s++;
    e--;
    return Check(str,s,e);
    
}
int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int e=n-1;
    bool ans=Check(s,0,e);
    cout << ans <<endl;
    return 0;
}