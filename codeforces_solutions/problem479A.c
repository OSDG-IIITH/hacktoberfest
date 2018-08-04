#include<stdio.h>

int main()
{	//variable declaration
	int a,b,c,R[6],x,i;

	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	R[4] = a*b*c;
	R[1] = a+b*c;
	R[2] = a*b +c;
	R[3] = a*(b+c);
	R[0] = (a+b)*c;
	R[5] = a+b+c;
	x = R[0];
	//for finding the largest number in them we have comparing them
	for(i=0;i<=5;i++)
	{	if(x<R[i])
		x = R[i];
	};
	printf("%d",x);
	return 0;
}
