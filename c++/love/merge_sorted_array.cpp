#include<iostream>
using namespace std;
void mergesortedarray(int arr1[],int m,int arr2[],int n,int arr3[])
{
    int i=0,j=0,k=0;
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++,k++;
        }
        else{
            arr3[k]=arr2[j];
            j++,k++;
        }
    }
    while(i<m){
        arr3[k]=arr1[i];
        i++;
        k++;
    }
    while(j<n){
        arr3[k]=arr1[j];
        j++;
        k++;
    }
}
int main()
{
    int n,m;
    cin>>m>>n;
    int arr1[m],arr2[n],arr3[m+n];
    for(int i=0;i<m;i++)
    cin>>arr1[i];
    for(int i=0;i<n;i++)
    cin>>arr2[i];
    mergesortedarray(arr1,m,arr2,n,arr3);
    for(int i=0;i<m+n;i++)
    cout<<arr3[i];
    return 0;
}