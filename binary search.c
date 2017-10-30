#include<stdio.h>

int binary_search(int a[],int l,int u,int choice)//assumes array is sorted 
{
	int m;
	while(l<u)
	{
		m=(l+u)/2;

		if(a[m]==choice)
			return m;

		if(choice<a[m])
			u=m-1;
		else
			l=m+1;
	}

	if(a[l]==choice)
		return l;
	else
		return -1;
}

int main()
 {
 	int a[10]={1,2,2,3,4,5,6,7,8,9};

 	int c=binary_search(a,0,9,2);
 	if(c==-1)
 		printf("NON existing\n");
 	else
 		printf("EXISTING at index %d\n",c);
 	
 	return 0;
 }