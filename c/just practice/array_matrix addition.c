#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a1[n][n],a2[n][n],a3[n][n],i,j;
	printf("enter the first array\n");
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			scanf("%d",&a1[i][j]);
		}
		printf("\n");
	}
	printf("enter the second array\n");
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			scanf("%d",&a2[i][j]);
		}
		printf("\n");
	}
//	for(i=0;i<=n-1;i++){
//		for(j=0;j<=n-1;j++){
//			printf("%d\t",a1[i][j]);
//		}
//		printf("\n");
//	}
//	printf("\n\n");
//	for(i=0;i<=n-1;i++){
//		for(j=0;j<=n-1;j++){
//			printf("%d\t",a2[i][j]);
//		}
//		printf("\n");
//	}
	printf("\n\n");
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			a3[i][j]=a1[i][j]+a2[i][j];
		}
	}
	printf("\naddition of matrix\n");
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			printf("%d\t",a3[i][j]);
		}
		printf("\n");
	}
	printf("\ntranspose of matrix\n");
	for(i=0;i<=n-1;i++){
		for(j=0;j<=n-1;j++){
			printf("%d\t",a3[j][i]);
		}
		printf("\n");
	}
    return 0;
}

