//sorted array
#include<iostream>
using namespace std;
int fo(int arr[],int n,int k){
    int s=0,e=n-1,m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==k){
            ans=m;
            e=m-1;
        }
        else if(arr[m]<k){
            s=m+1;
        }
        else if(arr[m]>k){
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int lo(int arr[],int n,int k){
    int s=0,e=n-1,m=s+(e-s)/2;
    int ans=-1;
    while(s<=e){
        if(arr[m]==k){
            ans=m;
            s=m+1;
        }
        else if(arr[m]<k){
            s=m+1;
        }
        else if(arr[m]>k){
            e=m-1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int arr[100],n,k;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the element to be searched = ";
    cin>>k;
    pair<int,int> ans;
    ans.first=fo(arr,n,k);
    ans.second=lo(arr,n,k);
    cout<<ans.first<<" "<<ans.second;
    return 0;
}