#include<stdio.h>
#include<stdlib.h>
int a[1001];
int b[1001];

int main()
{
	int n,x,count=0,i,t;
	scanf("%d%d",&n,&x);

	for(i=0;i<n;i++)
	{
		scanf("%d",&t);
		if(t<0)
		{
			t*=(-1);
			a[t]++;
		}
		else if (t>0)
		{
			/* code */
			b[t]++;
		}
	}

	for(i=1;i<=x;i++)
	{
		if(a[i]==b[i])
			continue;
		else
		{
			t=abs(a[i]-b[i]);
			if(t<0)
				t*=(-1);
			count+=t;
			//count+=abs(a[i]-b[i]);
		}
	}

	printf("%d",count);

	return 0;
}