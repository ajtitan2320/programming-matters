#include<iostream>
using namespace std;
void SayDigits(int n,string arr[]){
    if(n==0){
        return ;
    }
    else{
        int rem=n%10;
        n=n/10;
        
        SayDigits(n,arr);
        cout<<arr[rem]<<" ";
    }
    
}
int main()
{
    string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int num;
    cout<<"enter the number = ";
    cin>>num;
    SayDigits(num,arr);
    return 0;
}