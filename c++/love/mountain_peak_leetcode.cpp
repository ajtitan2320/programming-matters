#include<iostream>
using namespace std;
int PeakOfMountainArray(int arr[],int n){
    int s=0,e=n-1,m=s+(e-s)/2;
    while(s<e){
        if(arr[m]<arr[m+1]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=s+(e-s)/2;
    }
    return s;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int a=PeakOfMountainArray(arr,n);
    cout<<a;
    return 0;
}