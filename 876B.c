#include<stdio.>

int main()
{
	int i,j,n,k,m,p=1;
	int count=1,flag=0;
	scanf("%d%d%d",&n,&k,&m);
	int num[n];
	int test[k];
	for(i=0;i<n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<n;i++)
	{
		test[0]=num[i];
		p=1;
		count=1;
		//printf("%d-this is num[i]\n",num[i]);
		for(j=i+1;j<n;j++)
		{
			//printf("%d-this is j\n",j);
			if(((num[i]%m)-(num[j]%m)%m)==0)
			{
				count++;
				test[p]=num[j];
				p++;
			}
			//printf("%d-this is count\n%d-this is k\n",count);
			if(count==k)
			{
				flag=1;
				break;
			}
		}
		if(count==k)
			{
				flag=1;
				break;
			}


	}
	if(flag==1)
	{
		printf("Yes\n");
		for(i=0;i<k;i++)
		{
			printf("%d ",test[i]);
		}
	}
	else
		printf("No");
	return 0;
}


