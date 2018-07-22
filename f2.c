#include<stdio.h>

int main()
{
	int T;
	int num, i, j, k;
	int  N;
	if(scanf("%d", &T)){};
	int digit[160];
	int olddigit[160];
	int carry[160];
	for(k=0; k<T; k++)
	{
		printf("\n");
		for(num=0; num<158; num++)
		{
			digit[num]=0;
			carry[num]=0;
		}
		digit[0]=1;
		if(scanf("%d", &N)){};
		for(num=1; num<=N; num++)
		{
			for(j=0; j<158; j++)
			{
				olddigit[j]=digit[j];
			}
			digit[0]=(olddigit[0]*(num%10))%10;
			carry[1]=(olddigit[0]*(num%10))/10;
			digit[1]=(olddigit[1]*(num%10)+olddigit[0]*((num%100)/10)+carry[1])%10;
			carry[2]=(olddigit[1]*(num%10)+olddigit[0]*((num%100)/10)+carry[1])/10;
			for(i=2; i<158; i++)
			{
				digit[i]=((olddigit[i]*(num%10))+(olddigit[i-1]*((num%100)/10))+(olddigit[i-2]*(num/100))+carry[i])%10;
				carry[i+1]=((olddigit[i]*(num%10))+(olddigit[i-1]*((num%100)/10))+(olddigit[i-2]*(num/100))+carry[i])/10;
			}
		}
		for(i=0; i<158; i++)
		{
			if(digit[157-i]!=0)
			{
				printf("%d", digit[157-i]);
				break;
			}
		}
		for(j=i+1; j<158; j++)
		{
			printf("%d", digit[157-j]);
		}	
	}
	printf("\n");
	return 0;
}
