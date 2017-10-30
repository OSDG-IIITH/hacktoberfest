#include<stdio.h>
unsigned long long a[10000001];

void merge(unsigned long long a[],unsigned long long l,unsigned long long m,unsigned long long u)
{
	unsigned long long i,j,n1,n2,k;
	
    n1=m-l+1;
	n2=u-m;
	
    unsigned long long a1[n1],a2[n2];

	for(i=0;i<n1;i++)
		a1[i]=a[l+i];

	for(i=0;i<n2;i++)
		a2[i]=a[m+i+1];

	i=j=0;

    k=l;

	while (i < n1 && j < n2)
    {
        if (a1[i] <= a2[j])
        {
            a[k] = a1[i];
            i++;
        }
        else
        {
            a[k] = a2[j];
            j++;
        }

        k++;
    }

    while (i < n1)
    {
        a[k] = a1[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        a[k] = a2[j];
        j++;
        k++;
    }

}

void merge_sort(unsigned long long a[],unsigned long long l,unsigned long long u)
{
	unsigned long long m;
	if(l<u)
	{
		m=l+(u-l)/2;

		merge_sort(a,l,m);
		merge_sort(a,(m+1),u);
        merge(a,l,m,u);
		
	}

}

int main()
{
	unsigned long long n,k,i,j;

	scanf("%llu%llu",&n,&k);
	for(i=0;i<=n;i++)
		scanf("%llu",&a[i]);
	
	for(;i<10000001;i++)
		a[i]=0;
	
	merge_sort(a,0,n);

	for(i=0;a[i]==0;i++);

	for(;a[i]==a[i+1];i+=k);

	printf("%llu\n",a[i]);
	return 0;
}