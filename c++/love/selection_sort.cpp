/* SELECTION SORT MAI HAM I KO COMPARE KARATE HAI USKE BAAD WAALE SABSE AUR YE N-1 TAK CHALTA HAI
SPACE COMPLEXITY{
    O(1)
}
TIME COMPLEXITY {
    BEST = WHEN SORTED = O(n^2)
    WORST = WHEN SORTED IN DESCENDING = O(n^2)
}
*/
#include<iostream>
using namespace std;
void selection_sort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(arr[min_index]>arr[j]){
                min_index=j;
            }
        }
        swap(arr[min_index],arr[i]);
    }
}
int main()
{
    int arr[100],n;
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    selection_sort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}