#include<iostream>
using namespace std;
int main()
{
    int Number;
    cin>>Number;
    int Check = 0;
    for(int i = 2;i<=Number/2;i++){
        if(Number%i==0){
            Check = 1;
            break;
        }
    }
    if(Check == 1 || Number==1){
        cout<<"Not Prime";
    }
    else{
        cout<<"Prime";
    }
    return 0;
}