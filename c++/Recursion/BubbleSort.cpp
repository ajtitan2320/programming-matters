#include<iostream>
using namespace std;
void SortBubble(int *arr,int n){
    if(n==0 ||n==1){
        return ;
    }
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            swap(arr[i-1],arr[i]);
        }
    }
    SortBubble(arr,n-1);
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
    SortBubble(arr,n);
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}