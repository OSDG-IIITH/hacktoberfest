#include<stdio.h>
int main()
{
	char a,b,c;
	a='0';
	int d;
	while(a!='\n')
	{	c=b;
		b=a;
		scanf("%c",&a);
	}
	a=10*(c-'0')+b-'0';
	if(a%4==0)
		b=4;
	else
		b=0;
	printf("%d\n",b);
	return 0;
}
