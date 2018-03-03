#include<stdio.h>
int main()
{
	char a='a';
	float b=0.0;
	int i;
	int count_1=0;
	int count_2=0;
	int count_3=0;
	while(a!='\n')
	{
		scanf("%c",&a);
		if(a=='+') count_1++;
		else if(a=='-') count_1--;
	}
	a='a';
	while(a!='\n')
	{
		scanf("%c",&a);
		if(a=='+') count_2++;
		else if(a=='-') count_2--;
		else if(a=='?') count_3++;
	}
	if(count_1-count_2>=0)
	{
		//printf("%d %d %d \n",count_1,count_2,count_3);
		if(count_1-count_2<=count_3)
		{
			b=1.0;
			for(i=count_3;i>count_1-count_2;i--)
				b=b*i/(count_3-i+1);
			printf("comb%f\n",b);
			b=b/(1<<count_3);
		}
	}
	else
	{
		//printf("%d %d %d \n",count_1,count_2,count_3);
		if(count_2-count_1<=count_3)
		{
			b=1.0;
			for(i=count_3;i>count_2-count_1;i--)
				b=b*i/(count_3-i+1);
			printf("comb%f\n",b);
			b=b/(1<<count_3);
		}
	}
	printf("%0.10f\n",b);
	return 0;
}
