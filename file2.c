#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int starstring(char str[], int i, int l)
{
	char temp;
	int j;
//	printf("i %d-l %d\n",i,l);
	if(i==l)
	{
//		printf("%d\n",l);
		return l;
	}
	else
	{
//			printf("sti %c - sti-1 %c\n",str[i],str[i-1]);
//		printf("test");
		if(str[i]==str[i-1])
		{
			//printf("sti %c - sti-1 %c",str[i],str[i-1]);
			for(j=l-1;j>=i;j--)
			{
				temp=str[j];
				str[j+1]=temp;
			}
		l++;
		str[i]='-';
		}
	}
	starstring(str,i+1,l);
}
int main()
{	
	char str[100],nil;
	int l,i,j;
	scanf("%d",&l);
	scanf("%c",&nil);

	for(j=0;j<l;j++)
	{
		scanf("%c",&str[j]);
	}
	l=starstring(str,1,l);
//	printf("%d",l);
	for(i=0;i<l;i++)
	{
		printf("%c",str[i]);
	}

return 0;
}
