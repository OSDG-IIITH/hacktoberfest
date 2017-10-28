#include <stdio.h> 
int main()
{
	int t,a,b[1000000],i,length,delete,temp,count=0,flag=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&a);
		for(i=0;a!=0;i++)
		{
			b[i]=a%10;
			a=a/10;
			count=count+b[i];
		}
		length=i-1;
		delete=length+1;
		for(i=0;i<=length;i++)
		{
			if((count-b[i])%3==0)
			{
				delete=i;
				break;
			}
		}
		if(delete==0)
		{
			if(b[1]%2==0)
			for(i=length;i>=1;i--)
			{ 
				printf("%d",b[i]);
			}
			printf("\n");
		}
		else if(delete>0 && delete<=length && b[0]%2==0)
		{
			for(i=length;i>=0;i--)
			{
				if(i!=delete)
				{
					printf("%d",b[i]);
				}
			}
			printf("\n");
		}
		else
		{
			printf("-1\n");
		}
		count=0;
	}
	return 0;
}
