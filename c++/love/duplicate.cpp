#include<iostream>
using namespace std;
int main()
{
    int n,i,h;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    for(i=0;i<n-1;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]^arr[j]==0){
                h=arr[i];
            }
        }
    }
    cout<<h;
    return 0;
}