#include<stdio.h>
int main()
{
	int n,i,c1=0,c2=0,sum1=0,sum2=0;
	float avg1,avg2;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<=n-1;i++){
		if(i%2==0){
			sum1=sum1+arr[i];
			c1++;
		}
		
	}
    for(i=0;i<=n-1;i++){
		if(i%2!=0){
			sum2=sum2+arr[i];
			c2++;
		}
		
	}
	avg1=(float)sum1/c1;
	avg2=(float)sum2/c2;
	printf("even sum = %d\nodd sum = %d\neven avg = %f\nodd avg = %f",sum1,sum2,avg1,avg2);
    return 0;
}
