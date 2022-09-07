#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	int max=arr[0];
	for(i=0;i<=n-1;i++){
		if(max<arr[i]){
			max=arr[i];
		}
	}
	printf("\n%d\n",max);
	int min=arr[0];
	for(i=0;i<=n-1;i++){
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("\n%d\n",min);
	
    return 0;
}

