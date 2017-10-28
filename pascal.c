#include<stdio.h>
int main()
{
	int a[50][50], k, i, x, y ;
	printf("How many rows : ") ;
	scanf("%d",&k) ;

	for(i=1;i<=k;i++)
	{
		a[i][1]=1 ;
		a[i][i]=1 ;
	}

	for(x=3;x<=k;x++)
		for(y=2;y<x;y++)
			a[x][y] = a[x-1][y-1] + a[x-1][y] ;
	printf("\nPascal's triangle :\n") ;

	for(x=1;x<=k;x++)
	{
		printf("\n") ;
		for(y=1;y<=x;y++)
		{
			if(y==1)
				for(int p=1;p<=2*k-x;p++)
					printf(" ") ;
			if(a[x][y]>9)
				printf(" ") ;
			else printf("  ") ;
			printf("%d",a[x][y]) ;
		}
	}
	printf("\n") ;
	return 0 ;
}
