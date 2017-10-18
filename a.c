#include<stdio.h>
int main()
{
	int a[100000],n,i,j,temp;
	printf("Enter Size of Array");
	scanf("%d",&n);// Scaning size of array
	printf("Enter Array");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);// Scaning array 
	// Sorting array
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
	printf("Sorted Array");
	for(i=0;i<n;i++)
		printf("%d",a[i]);// Printing sorted array
	return 0;

}
