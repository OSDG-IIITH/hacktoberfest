#include<stdio.h>

int main()
{
	//variable declaration
	int m,n,a,b,count=0;
	
	//read m and n
	scanf("%d",&m);
	scanf("%d",&n);
	
	a=n/2;	b=m/2;
	
	//use if else statement for finding the max no of squares
   if(m>1 && n>1)
   {	if((m*n)%2==0)
	{		if(n>m)
			{if(n%2==0)
				{count = (m*n)/2;}
			 else
				{count = (m*n)/2 + b;};
			};
			if(n<m)
			{if(m%2==0)
				{count = (m*n)/2;}
		 	else
				{count = (m*n)/2 + a;};
			}
			else
				{count = (m*n)/2;};
	}
	else
	{	count =(m*n)/2;};
   }
   else
   {if(m*n==1)
	{count = 0;}
    else
	{count = (m*n)/2;};
   };		
	printf("%d",count);
	return 0;
}
