#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s){
    string t="";
    int i=0;
    while(i<s.size()){
        if(s[i]>='a' && s[i]<='z'){
            t.push_back(s[i]);
        }
        else if(s[i]>='A' && s[i]<='Z')
        {
            t.push_back(s[i]-'A'+'a');
        }
        else{
            continue;
        }
        i++;
    }
    cout<<t<<endl;
    int st=0,e=t.size()-1;
    while(st<e){
        if(t[st]==t[e])
        {
            st++;
            e--;
        }
        else{
            return false;
        }


    }
    return true;
}
int main()
{
    string s;
    cin>>s;
    cout<<s<<endl;
    bool a= isPalindrome(s);
    cout<<a<<endl;
    return 0;
}