#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--){
        string s;
        cin >> s;
        string ans = "";
        if (s.size() > 10)
        {
            ans.push_back(s[0]);
            ans+=to_string(s.size() - 2);
            ans.push_back(s[s.size() - 1]);
            cout<<ans<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
    return 0;
}