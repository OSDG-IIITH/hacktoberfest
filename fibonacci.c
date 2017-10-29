#include<stdio.h>
int dp[10000];
int fibo(int n)
{
		if(n==1)
				return 0;
		if(n==2)
				return 1;
		if(n>2)
		{
				if(dp[n]==0)
						dp[n]=fibo(n-1)+fibo(n-2);
				if(dp[n]!=0)
						return dp[n];
		}
}
int main()
{
		int n; 
		scanf("%d",&n);
		printf("%d\n",fibo(n));
		return 0;
}

