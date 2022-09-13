#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,c=0;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i+1]<arr[i]){
            while(arr[i+1]!=arr[i]){
                arr[i+1] = arr[i+1]+1;
                ++c;
            }
        }
    }
    cout<<c;
    return 0;
}