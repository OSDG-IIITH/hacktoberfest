#include<stdio.h>
int main()
{
	void mergeSort(long long int power[], int start, int end);
	void merge(long long int power[], int start , int mid, int end);
	int N,j;
	long long int sum=0;
	scanf("%d",&N);
	long long int powofpoke[N];
	for(j=0;j<N;j++)
	{
		scanf("%lld",&powofpoke[j]);
		sum+=powofpoke[j];
	}
	long long int halfofsum=sum/2;
	mergeSort(powofpoke, 0, N - 1);
	for(j=0;j<N;j++)
	{
		sum-=powofpoke[N-j-1];
		if(sum<halfofsum)
		{
			printf("%d",j+1);
			return 0;
		}
	}
	return 0;
}
void merge(long long int power[], int start, int mid, int end)
{
    int p1,p2,k;
    int len1=mid-start+1;
    int len2=end-mid;
    long long int part1[len1],part2[len2];
    for(p1=0;p1<len1;p1++)
        part1[p1]=power[start+p1];
    for(p2=0;p2<len2;p2++)
        part2[p2]=power[mid+1+p2];
    p1=0;
    p2=0;
    k=start;
    while(p1<len1&&p2<len2)
    {
        if(part1[p1]<=part2[p2])
        {
            power[k]=part1[p1];
            p1++;
        }
        else
        {
            power[k]=part2[p2];
            p2++;
        }
        k++;
    }

    while(p1<len1)
    {
        power[k]=part1[p1];
        p1++;
        k++;
    }

    while(p2<len2)
    {
        power[k]=part2[p2];
        p2++;
        k++;
    }
}

void mergeSort(long long int power[], int start, int end)
{
    if (start<end)
    {
        int mid = start+(end-start)/2;
        mergeSort(power,start,mid);
        mergeSort(power,mid+1,end);
	merge(power,start,mid,end);
    }
}

