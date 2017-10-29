/*program for binary search */
#include<stdio.h>

int binsrch(int array[],int num,int start,int end)
{
	int low=start;
	int high=end;
	int middle=(start+end)/2;
	int flag=0;

	while(low<high)
	{
		if(num<array[middle])
		{
			high=middle;
			middle=(low+high)/2;
		}
		if(num>array[middle])
		{
			low=middle;
			middle=(low+high)/2;
		}
		if(num==array[middle])
		{
			flag=1;
			printf("The number is at position %d",middle+1);
			break;
		}
	}
	if(flag==0)
	{
		printf("number not present");
	}
	return 0;
}

int main()//for testing binsrch
{
	int num[15],i;
	for(i=0;i<8;i++)
	{
		scanf("%d",&num[i]);//scanning test cases
	}

	int para;//number to find
	scanf("%d",&para);
	binsrch(num,para,0,7);
	return 0;
}
	




