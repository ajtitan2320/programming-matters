#include<iostream>
using namespace std;
void SelectionSort(int arr[],int n){
    for(int i = 0 ; i < n-1 ; i++){
        int MinIndex = i;
        for(int j=i+1 ; j < n ; j++){
            if(arr[MinIndex] > arr[j]){
                MinIndex = j;
            }
        }
        swap(arr[MinIndex],arr[i]);
    }
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    SelectionSort(arr,n);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}