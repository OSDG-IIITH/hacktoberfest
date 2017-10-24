#include<stdio.h>

int main()
{
	//variable declaration
	unsigned int n,a,m,k,l;
	long long int p;
	scanf("%d",&n);
	scanf("%d",&m);
	scanf("%d",&a);
	//logic
	if(n%a==0)
	{k =(n/a);}
	else
	{k= (n/a)+1;}
	if(m%a==0)
	{l=m/a;}
	else
	{l=m/a+1;}
	p=k*l;
	printf("%lld",p);
	return 0;}


