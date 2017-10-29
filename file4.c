#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int t=0, temp, num[100], fact=1, i=0, a[1000], b[1000], lol=0 ,c=0, carry=0,l=10, mul=14 ;
	scanf("%d",&t);
	temp=0;
	
	for(temp;temp<t;temp++)
	{
		scanf("%d",&num[temp]);
	}	
	
	for(temp=0;temp<t;temp++)
	{
		fact=1;
		if(num[temp]<13)
		{
			for(i=2;i<=num[temp];i++)
			{
				fact=fact*i;
			}
		}
		else if(num==13)
			printf("6227020800");
		else
		{
			for(i=0;i<1000;i++)
			{
				a[i]=0;
				b[i]=0;
			}
		
		
			for(i=9;i>=0;i--)
			{
				lol=6227020800>>i;
				a[i]=lol%10;
			}
			l=9;
			
			for(i=0;i<=l;i++)
			{
				if(i=0)
				{
					a[i]*=mul;
					carry=a[i]/10;
					a[i]=a[i]%10;
				}
				if(i=1)
				{
					a[i]*=mul;
					a[i-1]*=mul;

				}
			}


		}
			




		printf("%d\n",fact);
	}


return 0;
}
