#include<stdio.h>

int main()
{
	int x[100],y[100],z[100],i,n,sum1,sum2,sum3;
	scanf("%d",&n);
	 
	for(i=0;i<n;i++)
	{ scanf("%d",&x[i]);
	 scanf("%d",&y[i]);
	 scanf("%d",&z[i]);
	};
	
	sum1=0;sum2=0;sum3=0;
	for(i=0;i<n;i++)
	{sum1+=x[i];
	sum2+=y[i];
	sum3+=z[i];
	};
	
	if(sum1==0 && sum2==0 && sum3==0)
	{printf("YES");}
	else
	{printf("NO");};


	return 0;
}
