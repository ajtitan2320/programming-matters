#include<iostream>
using namespace std;
int Partition(int *arr,int s,int e){
    int Pivot=arr[s];
    int Count = 0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=Pivot){
            Count++;
        }
    }
    int Index = s+Count;
    swap(arr[s],arr[Index]);

    int i = s;
    int j = e;
    while(i<Index && j>Index){
        while(arr[i]<=arr[Index]){
            i++;
        }
        while(arr[j]>arr[Index]){
            j--;
        }
        if(i<Index && j>Index){
            swap(arr[i++],arr[j--]);
        }
    }
    return Index;
}
void QuickSort(int *arr,int s,int e){
    if(s>=e){
        return ;
    }

    int p = Partition(arr,s,e);

    QuickSort(arr,s,p-1);
    QuickSort(arr,p+1,e);
}
int main()
{
    int arr[10],n;
    cout<<"enter the size = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}