#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int c=1;
    for(char i:s){
        if(i>='A' && i<='Z'){
            c++;
        }
    }
    cout<<c;
    return 0;
}