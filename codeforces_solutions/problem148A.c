#include<stdio.h>

int main()
{	
	//variable declaration
	int a,k,l,m,n,d;
	
	//read all the variables(k,l,m,n,d)
	scanf("%d",&k);
	scanf("%d",&l);	
	scanf("%d",&m);
	scanf("%d",&n);
	scanf("%d",&d);

	if(d%k==0)
	{count1=d/k;}
	else
	{count1=(d/k)+1;};

	if(d%l==0)
	{count2=d/l;}
	else
	{count2=(d/l)+1;};
	
	if(d%m==0)
	{count3=d/m;}
	else
	{count3=(d/m)+1;};

	if(d%n==0)
	{count4=d/m;}
	else
	{count4=(d/m)+1;}





return 0;
}
