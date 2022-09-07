#include<iostream>
using namespace std;
int SumOfArray(int arr[],int n){
    if(n==0){
        return 0;
    }
    return arr[0]+SumOfArray(arr+1,n-1);
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
    int ans = SumOfArray(arr,n);
    cout << ans <<endl;
    return 0;
}