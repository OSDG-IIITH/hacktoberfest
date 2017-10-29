#include<stdio.h>
int maxsum(int n)
{
		int a=n/2;
		int b=n/3;
		int c=n/4;
		if(n==0)
				return 0;
		if(a+b+c<n)
				return n;
		else
				return maxsum(a)+maxsum(b)+maxsum(c);
}
int main()
{
		int n;
		scanf("%d",&n);
		printf("%d\n",maxsum(n));
		return 0;
}

