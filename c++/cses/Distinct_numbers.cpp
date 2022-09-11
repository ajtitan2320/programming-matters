#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int> arr(n);
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    long long c=1;
    for(long long int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            c++;
        }
    }
    cout<<c;
    return 0;
}