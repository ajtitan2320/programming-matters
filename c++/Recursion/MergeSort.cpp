#include<iostream>
using namespace std;
void Sort(int *arr,int s,int e){
    int mid = s+(e-s)/2;
    int len1= mid-s+1;
    int len2= e-mid;
    int *arr1 = new int[len1];
    int *arr2 = new int[len2];

    //Copying The Values

    //Left Part
    int MainIndex = s;
    for(int i=0;i<len1;i++){
        arr1[i]=arr[MainIndex++];
    }

    //Right Part
    MainIndex = mid+1;
    for(int i=0;i<len2;i++){
        arr2[i]=arr[MainIndex++];
    }

    //Sorting Ki Baari

    int Index1=0;
    int Index2=0;
    MainIndex = s;
    while(Index1<len1 && Index2<len2){
        if(arr1[Index1]<arr2[Index2]){
            arr[MainIndex++]=arr1[Index1++];
        }
        else{
            arr[MainIndex++]=arr2[Index2++];
        }
    }
    while(Index1<len1){
        arr[MainIndex++]=arr1[Index1++];
    }
    while(Index2<len2){
        arr[MainIndex++]=arr2[Index2++];
    }
}
void MergeSort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }
    int m = s+(e-s)/2;

    //Left Part
    MergeSort(arr,s,m);

    //Right Part
    MergeSort(arr,m+1,e);

    //For Sorting The Parts
    Sort(arr,s,e);
}
int main()
{
    int arr[10],n;
    cout<<"enter the size of array  =";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}