/* AGRESSIVE COWS
Given an array of length ‘N’, where each element denotes the position of a stall. Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. To prevent the cows from hurting each other, you need to assign the cows to the stalls, such that the minimum distance between any two of them is as large as possible. Return the largest minimum distance.
Input Format :
The first line contains a single integer ‘T’ denoting the number of test cases.

The first line of each test case contains two integers ‘N’ and ‘K’ denoting the number of elements in the array/list and the number of aggressive cows.

The second line contains ‘N’ single space-separated integers denoting the elements of the array.
Output Format :
For each test case, print the majority element in a separate line.
Note :
You do not need to print anything; it has already been taken care of.
Constraints :
1 <= T <= 5
2 <= N <= 20000
2 <= C <= N
0 <= ARR[i] <= 10 ^ 9

Where ‘T’ is the number of test cases, 'N' is the length of the given array and, ARR[i] denotes the i-th element in the array.

Time Limit: 1 sec.
Sample Input 1 :
2
3 2
1 2 3
5 2
4 2 1 3 6
Sample Output 1 :
2
5
Explanation To Sample Input 1 :
In the first test case, the largest minimum distance will be 2 when 2 cows are placed at positions {1, 3}.

In the second test case, the largest minimum distance will be 5 when 2 cows are placed at positions {1, 6}.
Sample Input 2 :
2
6 4
0 3 4 7 10 9
6 3
0 4 3 7 10 9
Sample Output 2 :
3
4
Explanation To Sample Input 2 :
In the first test case, the largest minimum distance will be 3 when 4 cows are placed at positions {0, 3, 7, 10}.

In the second test case, the largest minimum distance will be 4 when 3 cows are placed at positions {0, 4, 10}.
*/
#include<bits/std++.h>
using namespace std;
bool check(int arr[],int n,int k,int mid){
    int c=1;
    int m=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]-m>=mid){
            c++;
            if(c==k)
            return true;
            m=arr[i];
        }
    }
    return false;
}
int stalls(int arr[],int n,int k){
    sort(arr[0],arr[n-1]);
    int s=0,ans;
    int max=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int e=max,mid=s+(e-s)/2;
    while(s<=e){
        if(check(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,arr[100];
        cin>>n>>k;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<stalls(arr,n,k)<<" ";
    }
    return 0;
}