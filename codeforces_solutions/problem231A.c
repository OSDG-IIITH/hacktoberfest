#include<stdio.h>

int main()

{	
	//variable declaration
	int a[3],i,j,n,count,m;
	count =0;
	//read n
	scanf("%d",&n);
	
	//use for loop
	for(i=1;i<=n;i++)
	{//read the array
	 for(j=0;j<3;j++)
		{scanf("%d",&a[j]);};
		m =a[0]*a[1]+a[1]*a[2]+a[2]*a[0];

	if(m>=1)
	count++;
	}
	
	printf("%d",count);
	 return 0;
}
