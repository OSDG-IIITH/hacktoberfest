#include<stdio.h>
#include<math.h>
int main()
{

float sum=0;
	for(  float i=1; i<1000000; i++)
	{
		sum=sum+(1/(i*i));
	}
	float pi;
pi=sqrt(6*sum);
printf("%f", pi);
} 
