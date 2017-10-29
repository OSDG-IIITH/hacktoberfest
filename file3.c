#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	char a[100], b[100];
	int i=0,j=0,tru=0,temp=0;
	scanf("%s",a);

	while(a[i]!='\0')
	{
		i++;
	}
	temp=i-1;
	i=i-1;
	while(i>=0)
	{
		b[temp-i]=a[i];
		i--;
	}
	i=0;
	while(i<=temp)
	{
		if(a[i]!=b[i])
		{
			printf("no");
			break;
		}
		else
		{
			tru++;
		}
		if (tru==temp)
		{printf("yes");	}
		i++;
	}

	return 0;
}
