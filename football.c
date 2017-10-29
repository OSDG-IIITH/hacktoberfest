#include<stdio.h>
#include<string.h>
int main()
{
 	char arr[102];
	int i;
	scanf("%s",arr);
	int count=1;
	int n=strlen(arr);
	for(i=1;i<n;i++)
	{
		if(arr[i]==arr[i-1])
		{
			count++;
			if(count==7)
			{
				printf("YES");
				break;
			}
		}
		else
			count=1;
	}
	if(count<7)
		{
			printf("NO");
		}


	return 0;

}
