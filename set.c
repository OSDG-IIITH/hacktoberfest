#include <stdio.h>
int main()
{
	long long int n,k,i,j,bit;
	scanf("%lld %lld",&n,&k);
	long long int a[n+1],ans=0;
	long long int size=64;
	long long int count[64];     //array of size = total no of bits any element of array can have
	for(i=0;i<n+1;i++)
		scanf("%lld",&a[i]);
	for(i=0;i<size;i++)
		count[i]=0;          //initializing each value to zero
	for(i=0;i<n+1;i++)
	{
		for(j=0;j<size;j++)
		{
			bit=1&(a[i]>>j);       // for each element storing their binary sums in array
			count[j]+=bit;
		}
	}
	for(i=0;i<size;i++)
	{
		if(count[i]%k!=0)
			ans=ans+(1<<i);//if count[i] is not divisible by k,the new int must be 1 at that position 
	}
	printf("%lld\n",ans);
	return 0;
}


