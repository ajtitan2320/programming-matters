#include<stdio.h>
int main() {
   int n,i;
   scanf("%d",&n);
   int arr[n];
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   for(i=0;i<n/2;i++){
      while(arr[i]>=10){
         arr[i]=arr[i]/10;
      }
   }
   for(i=n/2;i<n;i++){
      arr[i]=arr[i]%10;
   }
   int s=0;
   for(i=0;i<n;i++){
      s=s*10+arr[i];
   }
   if(s%11==0){
       printf("OUI");
   }
   else{
       printf("NON");
   }
}