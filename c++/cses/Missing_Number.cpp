#include<iostream>
using namespace std;
int main()
{
    long long int n;
    long long int i=0,s=0;
    cin>>n;
    long long int arr[n];
    for(i=0;i<n-1;i++){
        cin>>arr[i];
        s=s+arr[i];
    }
    long long int s2=(n*(n+1))/2;
    cout<<s2-s;
    return 0;
}