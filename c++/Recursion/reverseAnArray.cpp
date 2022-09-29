#include<bits/stdc++.h>
using namespace std;
int arr[]={1,2,3,4,5};
void Reverse(int arr[],int i,int n){
    if(i>=n/2){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    Reverse(arr,i+1,n);
}
// void Reverse(int arr[],int i,int j){
//     if(i>=j){
//         return ;
//     }
//     swap(arr[i],arr[j]);
//     Reverse(arr,i+1,j-1);
// }
int main()
{
    
    Reverse(arr,0,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}
