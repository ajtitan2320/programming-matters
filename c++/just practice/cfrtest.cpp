#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,i,c=1;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        cout<<arr[i]<<endl;
        cout<<c<<endl;
    }
    return 0;
}
