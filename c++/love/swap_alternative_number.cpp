#include<iostream>
using namespace std;
void myswap(int arr[],int n){
	int i;
	for(i=0;i<n;i+2){
        if(i+1<n)
        swap(arr[i],arr[i+1]);
    }
}
int main()
{
    int n,i;
    cin>>n;
    int arr[100];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    myswap(arr,n);
    for(i=0;i<n;i++){
        cout<<arr[i];
    }
    return 0;
}