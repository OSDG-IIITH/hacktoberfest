#include<stdio.h>
/*int ncr(int n,int r)
  {
  if(r==1)
  {
  return n;
  }
  if(r==0 || r==n)
  {
  return 1;
  }
  return ncr(n-1,r)+ncr(n-1,r-1);
  }*/
long long int  nChoosek( long long int n,long long int  k )
{
	if (k > n) return 0;
	if (k * 2 > n) k = n-k;
	if (k == 0) return 1;

	long long int result = n;
	for( long long int i = 2; i <= k; ++i ) {
		result *= (n-i+1);
		result /= i;
	}
	return result;
}

int main()
{
	int i=0;
	long long int n,teams;
	scanf("%lld%lld",&n,&teams);
	long long int a=n-teams+1;
	long long int max=a*(a-1)/2;
	int pl[1000009]={0};
	int flag;
	long long int min=0;
	flag=0;
	if(n==teams)
	{
		printf("0 0");
		flag=1;
	}
	else if(teams==1)
	{
		min=n*(n-1)/2;
	}
	else
	{

		for(n=n;n>0;n--)
		{
			pl[i]++;
			if(i==(teams-1))
			{
				i=0;
			}
			else
				i++;
		}

		for(i=0;i<teams;i++)
		{
			min+=nChoosek(pl[i],2);
			//min+=pl[i]*(pl[i]-1)/2;
		}
	}
	if(flag==0)
	{
	printf("%lld %lld",min,max);
	}
	return 0;
}
