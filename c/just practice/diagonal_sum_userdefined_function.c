#include<stdio.h>
int main()
{
	int a,b,sum1=0,sum2=0;
	scanf("%d%d",&a,&b);
	int arr[a][b],i,j;
	for(i=0;i<=a-1;i++){
		for(j=0;j<=b-1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<=a-1;i++){
		for(j=0;j<=b-1;j++){
			if(i==j){
				sum1+=arr[i][j];
			}
		}
	}
		for(j=0;j<=b-1;j++){
				sum2+=arr[i][b-i-1];
	}
	printf("\n%d",sum2);
    return 0;
}

