// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n,x,sum=0;
//         scanf("%d%d",&n,&x);
//         int i, arr[n];
//         for(i=0;i<n;i++){
//             scanf("%d",&arr[i]);
//         }
//         if(n==1)
//         {
//             if(x>arr[0])
//             printf("%d\n",x/arr[0]);
//             else
//             printf("%d\n",arr[0]/x);
//         }
//         else{
//             for(i=0;i<n;i++){
//                 sum=sum+(arr[i]/x);
//             }
//             printf("%d\n",sum);
//         }
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int arr[] = { 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d",n);
    return 0;
}