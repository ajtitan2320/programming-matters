#include<bits/stdc++.h>
using namespace std;
bool CheckPalindrome(string s,int i,int n){
    if(i>=n/2){
        return true;
    }
    if(s[i]!=s[n-i-1]){
        return false;
    }
    return CheckPalindrome(s,i+1,n);
}
int main()
{
    string s = "anamana";
    cout<<CheckPalindrome(s,0,s.length());
    return 0;
}
int *arr = new int(1);