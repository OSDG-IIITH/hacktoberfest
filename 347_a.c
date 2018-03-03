#include<stdio.h>
int brr[100];
void merger(int arr[],int a,int b,int c)
{
	int d,e;
	printf("a:%d b:%d c:%d\n",a,b,c);
	d=b+1;
       	e=a;
	printf("d:%d e:%d\n",d,e);
	while(e<=c)
	{
		if(a<=b && d<=c)
			if(arr[a]<arr[d])
			{
				brr[e]=arr[a];
				e++;
				a++;
			}
			else
			{
				brr[e]=arr[d];
				e++;
				d++;
			}
		else if(a>b)
		{	
			brr[e]=arr[d];
			d++;
			e++;
		}
		else
		{
			brr[e]=arr[a];
			a++;
			e++;
		}
	}
	printf("a:%d b:%d c:%d d:%d e:%d \n",a,b,c,d,e);
}
void merge_sort(int arr[],int a,int b)
{
	int mid;
	if(b==a)
		return ;
	else
	{
		mid=(a+b)/2-1;
		merge_sort(arr,a,mid);
		merge_sort(arr,mid+1,b);
		merger(arr,a,mid,b);
	}
}
int main()
{
	int arr[100];
	int n;
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	merge_sort(arr,0,n-1);
	//merger(arr,0,(n-1)/2,n-1);
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d",brr[i]);
	printf("\n");
	return 0;
}
