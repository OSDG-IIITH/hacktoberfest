#include<stdio.h>
#include<limits.h>
int main()
{
	int num,arr[10000],number,sum=0,t,k=0,temp,temp1,i,j,n,f=0,mod,flag=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d",&n);
		num=n;
		number=n;
		mod=n%2;
		if(num%6==0)
		{
			printf("%d\n",num);
			continue;
		}
		while(n>0)
		{
			sum+=(n%10);
			n=n/10;
		}
		temp=sum%3;
		while(num>0)
		{
			temp1=num%10;
			if(temp1==temp && flag==0)
			{
				num=num/10;
				f=1;
				flag=1;
			}
			else
			{
				arr[k]=temp1;
				num=num/10;
				k++;
			}
		}
		//printf("k=%d",k);
		if(temp==0)
			printf("%d",number/10);
		else if(mod!=0 && temp!=(number%10) && temp!=0)
			printf("-1");

		else if(f==0)
			printf("-1");
		else
		{
			for(j=k-1;j>=0;j--)
				printf("%d",arr[j]);
		}
		printf("\n");

		f=0;
		flag=0;
		k=0;


	}
	return 0;
}
