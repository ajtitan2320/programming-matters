/* INSERTION SORT MAI HAM I=1 KO USKE PICHE WALE SE COMPARE KARTE HAI AUR SHIFT KARTE HAI
SPACE COMPLEXITY{
    O(1)
}
TIME COMPLEXITY {
    BEST = WHEN SORTED = O(n)
    WORST = WHEN SORTED IN DESCENDING = O(n^2)
}
*/
#include<iostream>
using namespace std;
void bubble_sort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j++){
            if(arr[j]<arr[j+1])
            arr[j+1]=temp;
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    bubble_sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}