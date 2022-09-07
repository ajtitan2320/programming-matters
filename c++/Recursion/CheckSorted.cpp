#include<iostream>
using namespace std;
bool Check(int arr[],int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    return Check(arr+1,n-1);
}
int main()
{
    int arr[10];
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans = Check(arr,n);
    cout << ans <<endl;
    return 0;
}