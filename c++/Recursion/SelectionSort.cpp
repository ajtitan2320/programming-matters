#include<iostream>
using namespace std;
void SortSelection(int *arr,int index,int n){
    if(n==index){
        return ;
    }
    int min=index;
    for(int i=index+1;i<n;i++){
        if(arr[min]>arr[i]){
            min=i;
        }
    }
    swap(arr[index],arr[min]);
    SortSelection(arr,index+1,n);
}
int main()
{
    int arr[10];
    int n;
    cout<<"enter the size of array = ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SortSelection(arr,0,n);
    cout<<endl<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}