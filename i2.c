
#include<stdio.h>
long long int sum[1000001];
int main()
{
	long long int pri[1000001];
	long long int i,j,m,n;
	long long int a;
	int T;
	for(i=0;i<1000001;i++)
	{
		pri[i]=1;
	}
	pri[0]=0;pri[1]=0;
	for(i=2;i<1000001;i++)
	{
		if(pri[i]==1)
		{
		for(j=i;j*i<1000001;j++)
			pri[i*j]=0;
		}
	}
	for(i=2;i<1000001;i++)
	{	
		if(pri[i]==1)
		pri[i]=i;
	}

	for(i=0;i<1000001;i++)
		sum[i]=sum[i-1]+pri[i];
	
	if(scanf("%d",&T)){};
	for(i=0;i<T;i++)
	{
		if(scanf("%lld %lld",&n,&m)){};
		a=sum[m]-sum[n-1];
		printf("%lld\n",a);
	}
	return 0;
}
