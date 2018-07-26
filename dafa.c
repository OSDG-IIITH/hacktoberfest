#include<stdio.h>

void merge(int a1[102], int sz1, int a2[102], int sz2, int a3[102])
{
	int i=0,j=0,k=0;
	while((i<sz1)&&(j<sz2))
	{
		if(a1[i]<a2[j]){
			a3[i + j]=a1[i];
			i++;}
		if(a1[i]>=a2[j]){
			a3[i + j]=a2[j];
			j++;}
	}
	while(i<sz1){
		a3[i + j]=a1[i];
		i++;}	
	while(j<sz2){
		a3[i + j]=a2[j];
		j++;}	
	
}

void mergesort(int arr[100], int sz)
{
	if(sz<=1)
		return;
	int p1[102],p2[102],i;
	for(i=0;i<sz/2;i++)
		p1[i]=arr[i];
	for(i=sz/2;i<sz;i++)
		p2[i-sz/2]=arr[i];
	mergesort(p1, sz/2);
	mergesort(p2, sz-sz/2);
	merge(p1, sz/2, p2, sz-sz/2, arr);
}

int main()
{
	int i,sz;
	scanf("%d",&sz);
	int arr[102];
	for(i=0;i<sz;i++)
		scanf("%d",&arr[i]);
	mergesort(arr, sz);
	for(i=0;i<sz;i++)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
