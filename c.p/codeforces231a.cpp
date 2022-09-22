#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    while(n--){
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        if((arr[0] == 1 && arr[1] == 1) || (arr[1] == 1 && arr[2] == 1) || (arr[0] == 1 && arr[2] == 1)){
            c++;
        }
    }
    cout<<c;
    return 0;
}