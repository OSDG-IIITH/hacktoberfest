#include <stdio.h>
#include <math.h>
int main()
{
	int n,i,max,freq=0,maxcount=0,pos; 
	scanf("%d",&n);
	int a[n];
	double sum=0;
	max=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
		if(a[i]>max)
			max=a[i];
	}
	int mean = floor(sum/n);
	int count[max+1];
	for(i=0;i<=max;i++)
	count[i]=0;
	for(i=0;i<n;i++)
		count[a[i]]++;
	for(i=max;i>=0;i--)
	{
		freq+=count[i];
		if(freq>=((n+1)/2))
			break;
	}
	int median=i;
	for(i=0;i<=max;i++)
	{
		if (count[i]>maxcount)
		{
			maxcount=count[i];
		        pos=i;
		}
	}
	int mode = pos;
	printf("%d %d %d\n",mean ,median,mode);
	return 0;
}

