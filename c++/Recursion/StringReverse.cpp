#include<iostream>
#include<string>
using namespace std;
void Reverse(string& str,int s,int e){
    if(s>e){
        return ;
    }
    swap(str[s],str[e]);
    s++;
    e--;
    Reverse(str,s,e);
    
}
int main()
{
    string s="abcde";
    int n=s.length();
    int e=n-1;
    Reverse(s,0,e);
    cout << s <<endl;
    return 0;
}