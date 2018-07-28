#include<stdio.h>
int main()
{
	int n;
	int digit,mask=0;
	scanf("%d",&n);
	for(digit=0 ; n!=0 ; digit++)
	{
		if(n%10==7)
			mask+=(1<<digit);
		n=n/10;
	}
	n=(1<<digit)-1+mask;
	printf("%d\n",n);
	return 0;
}
