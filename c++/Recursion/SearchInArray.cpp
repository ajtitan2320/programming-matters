#include<iostream>
using namespace std;
bool Search(int arr[],int n,int k){
    if(n==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    return Search(arr+1,n-1,k);
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
    bool ans = Search(arr,n,k);
    cout << ans <<endl;
    return 0;
}