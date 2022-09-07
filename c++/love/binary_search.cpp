#include<iostream>
using namespace std;
int binary_search(int arr[],int n,int key){
    int start=0,end=n-1,mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else{
            end=end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return -1;
}
int main(){
    int arr[100],n,key,c;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl<<"enter the number to be search";
    cin>>key;
    c=binary_search(arr,n,key);
    if(c==-1)
    cout<<"not found";
    else{
        cout<<key<<" fount at index = "<<c;
    }
}