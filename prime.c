#include<stdio.h>
#include<math.h>

int main()
{
	int q, a, b, i, j, k, isprime, count=0,arr[1000000],l=0;
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		scanf("%d %d",&a,&b);
		l=0;
		count=0;
		for(j=a;j<=b;j++)
		{
			isprime=1;
			for(k=2;k<=sqrt(j);k++)
			{
				if(j%k==0)
				{
					isprime=0;
					break;
				}
			}
			if(isprime==1)
			{
				count++;
				arr[l]=j;
				l++;
			}
		}
		//for(j=0;j<l;j++)
		//	printf("%d ",arr[j]);
		if (count==0)
			printf("-1\n");
		else if (count%2==0)
			printf("%d\n",arr[count/2-1]);
		else
			printf("%d\n",arr[count/2]);
	}

	return 0;
}