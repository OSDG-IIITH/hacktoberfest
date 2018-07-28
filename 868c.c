#include<stdio.h>
int main()
{
	int n;
	int k;
	int i,j;
	int sum[16]={0};
	int temp;
	int flag=1;
	int temp_2;
	scanf("%d",&n);
	scanf("%d",&k);
	for(i=0;i<n;i++)
	{
		temp=0;
		for(j=0;j<k;j++)
		{
			scanf("%d",&temp_2);
			temp=temp*2+temp_2;
		}
		sum[temp]++;
	}
	//for(i=0;i<16;i++)
	//	printf("%d ",sum[i]);
	if(sum[0]!=0)
		flag=1;
	else
	{
		if(sum[15]!=0)
			flag=0;
		else
		{
			
		}
	}
	return 0;
}
