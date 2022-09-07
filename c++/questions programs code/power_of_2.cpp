#include<iostream>
using namespace std;
bool Power_Of_Two(int n){
    if(n<=0){
        return false;
    }
    return (n & (n-1))==0;
}
int main()
{
    int n;
    cin>>n;
    bool ans= Power_Of_Two(n);
    cout<<ans;
}