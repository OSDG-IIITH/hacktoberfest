#include<stdio.h>
int main()

{	//variable declaration
	int i,k,w,n,x;
	
	//reading the variables
	scanf("%d",&k);
	scanf("%d",&n);
	scanf("%d",&w);
	
	//formula
	x = (w*(w+1)*k)/2-n;
	if(x<0)
	x = 0;
	printf("%d",x);
	
	
	return 0;
}
