#include<iostream>
using namespace std;
bool BinarySearch(int arr[],int s,int e,int k){
    if(s>e){
        return false;
    }
    int m=s+(e-s)/2;
    if(arr[m]==k){
        return true;
    }
    else if(arr[m]<k){
        s=m+1;
    }
    else{
        e=m-1;
    }
    return BinarySearch(arr,s,e,k);
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
    int k;
    cout<<"enter the element to be search = ";
    cin>>k;
    bool ans = BinarySearch(arr,0,n-1,k);
    cout << ans <<endl;
    return 0;
}