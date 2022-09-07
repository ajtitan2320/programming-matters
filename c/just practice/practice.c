#include<stdio.h>
int main()
{
int n,i,j,temp=0,count=0;
printf("Enter the size of an Array \n");
scanf("%d",&n);
int Arr[n];
printf("Enter the elements in Array: \n");
for(i=0;i<n;i++)
scanf("%d",&Arr[i]);
for(i=0;i<n-1;i++)
{
 for(j=0;j<n-1;j++)
 {
 if(Arr[j]>Arr[j+1])
 {
 temp=Arr[j];
 Arr[j]=Arr[j+1];
 Arr[j+1]=temp;
 count++;
 }
 }
}
printf("Sorted Array is \n");
for(i=0;i<n;i++)
printf("%d\t",Arr[i]);
printf("\n");
printf("count=%d",count);
return 0;
}

