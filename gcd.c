#include <stdio.h>
int gcd(int x,int y)
{
	if(x==0)
	return y;
	return gcd(y%x,x);
}
int main()
{
	int k,i,sum=0;
	for(i=1001;i<2000;i++)
{
  k=gcd(1000,i);
 //printf("%d\n",k);
 if(k==1)
  {
  sum=sum+i;
 printf("%d\n",i);
  }
  }
  for(i=1;i<1000;i++)
{
  k=gcd(i,1000);
 //printf("%d\n",k);
 if(k==1)
  {
  sum=sum+i;
  printf("%d\n",i);
  }
  }
 //
 //	
  printf("%d",sum);
	return 0;
}
 
