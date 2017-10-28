#include<stdio.h>
//int larr[50005],rarr[50005];
int msort(int [], int );
int merge(int [],int [],int ,int [],int );
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	msort(arr,n);
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
int msort(int arr[],int n)
{
	if(n<=1)
		return 0;
	int larr[n/2+5],rarr[n/2+5];
	//larr={0},rarr={0};
	int lsize,rsize,i;
/*	for(i=0;i<50005;i++)
	{
		larr[i]=0;
		rarr[i]=0;
	}*/
	lsize=n/2;
	rsize=n-lsize;
	for(i=0;i<lsize;i++)
		larr[i]=arr[i];
	//larr[i+1]=INT_MAX;
	for(i=0;i<rsize;i++)
		rarr[i]=arr[lsize+i];
	//rarr[i+1]=INT_MAX;
	msort(larr,lsize);
	msort(rarr,rsize);
	merge(arr,larr,lsize,rarr,rsize);
	return 0;
}
int merge(int arr[],int larr[],int lsize,int rarr[],int rsize)
{
	int l=0,r=0,p=0;
	larr[lsize]=-1;
	rarr[rsize]=-1;
	while(l<=lsize && r<=rsize)
	{
		if(larr[l]>=rarr[r] && l<=lsize && r<=rsize)
		{
			arr[p]=larr[l];
			l++;
			p++;
		}
		else if(l<=lsize && r<=rsize)
		{
			arr[p]=rarr[r];
			r++;
			p++;
		}
	}
	return 0;
}
