#include<iostream>
using namespace std;
void Alternate_Swap(int arr[],int n){
    for(int i=1;i<n;i+=2){
        swap(arr[i-1],arr[i]);
    }
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Alternate_Swap(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}