#include<stdio.h>
int main()
{
	int n,m;
	scanf("%d",&n);
	scanf("%d",&m);
	int a1[n][m],i,j,sum1=0,sum2=0;
	printf("enter the first array\n");
	for(i=0;i<=n-1;i++){
		for(j=0;j<=m-1;j++){
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<=n-1;i++){
		for(j=0;j<=m-1;j++){
			printf("%d ",a1[i][j]);
		}
		printf("\n");
	}
    for(i=0;i<=n-1;i++){
		for(j=0;j<=m-1;j++){
			if(i==j){
				sum1+=a1[i][j];
			}
		}
    }
    for(i=0;i<=n-1;i++){
		for(j=0;j<=m-1;j++){
			if((i+j)==m-1){
				sum2+=a1[i][j];
			}
		}
    }
    
    
    printf("%d first diagonal",sum1);
    printf("%d second diagonal",sum2);
    return 0;
}

