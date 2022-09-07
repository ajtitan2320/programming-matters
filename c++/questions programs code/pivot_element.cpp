/* 
Write a program in C to find the pivot element of a sorted and rotated array using binary search.
Pivot element is the only element in input array which is smaller than it's previous element.
A pivot element divided a sorted rotated array into two monotonically increasing array.
*/
#include<iostream>
using namespace std;
int FindPivot(int arr[],int n){
    int s=0,e=n-1,m;
    while(s<e){
        m=s+(e-s)/2;
        if(arr[m]>=arr[0]){
            s=m+1;
        }
        else{
            e=m;
        }
    }
    return s;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int Pivot = FindPivot(arr,n);
    cout<< Pivot << endl;
    return 0;
}