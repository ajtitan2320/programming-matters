/* BUBLE SORT MAI HAM I KO COMPARE KARATE HAI USKE BAAD WAALE SABSE AUR YE N-1 TAK CHALTA HAI
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
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
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