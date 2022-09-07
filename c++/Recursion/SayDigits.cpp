#include<iostream>
using namespace std;
void Digits(int n){
    if(n==0){
        return ;
    }
    Digits(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    Digits(n);
    return 0;
}