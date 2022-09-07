// #include<stdio.h>
// #include<stdlib.h>
// // void swap_array(int a, int *arr1, int *arr2){
    

// // }
// int main()
// {
//     int a,i;
//     scanf("%d",&a);
//     int arr1[a],arr2[a],arr3[a];
//     printf("\n\nfirst array\n\n");
//     for(i=0;i<a;i++){
//         scanf("%d",arr1+i);
//     }
//     printf("\n\nsecond array\n\n");
//     for(i=0;i<a;i++){
//         scanf("%d",arr2+i);
//     }
//     for(i=0;i<a;i++){
//         arr3[i]= *(arr1+i);
//     }
//     for(i=0;i<a;i++){
//         *(arr1+i)= *(arr2+i);
//     }
//     for(i=0;i<a;i++){
//         *(arr2+i)=arr3[i];
//     }
//     printf("\n\n\n");
//     for(i=0;i<a;i++){
//         printf("%d\t",*(arr1+i));
//     }
//     printf("\n\n\n");
//     for(i=0;i<a;i++){
//         printf("%d\t",*(arr2+i));
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
  int arr[50],i,arr2[50],t[50],n,j;
  printf("enter range of first array");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d\n",arr+i);
  }
  for(i=0;i<n;i++)
  {
    scanf("%d\n",arr2+i);
  }
  for(i=0,j=0;i<=n-1,j<=n-1;i++,j++)
  {
  t[j]=arr[i];
  arr[i]=arr2[j];
  arr2[j]=t[j];
    }
    for(i=0;i<=n-1;i++)
    {
      printf("%d\t",arr[i]);
  }
  printf("\n");
  for(i=0;i<=n-1;i++)
    {
      printf("%d\t",arr2[i]);
  }
  return 0;
}