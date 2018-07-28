#include<stdio.h>
int gcd(int a,int b)
{
	if(a%b==0)
		return b;
	else
		gcd(b,a%b);
}
int main()
{
	int x,y;
	int a,b;
	int i;
	int count=0;
	int hcf,lcm;
	scanf("%d %d %d %d",&x,&y,&a,&b);
	hcf=gcd(x,y);
	//printf("%d",hcf);
	lcm=x*y/hcf;
	a--;
	count= b/lcm-a/lcm;
	printf("%d\n",count);
	return 0;
}
