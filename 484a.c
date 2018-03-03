#include<stdio.h>
int main()
{	
	int n;
	int i;
	int a,b;
	int count=0;
	scanf("%d",&n);
	for(count=0;n!=0;count++)
		n=n&(n-1);
	//for(i=0;i<n;i++)
	//{
	//	scanf("%d",&a);
	//	scanf("%d",&b);
	//}
	printf("%d\n",count);
return 0;
}
