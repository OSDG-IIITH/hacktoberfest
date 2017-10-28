#include <stdio.h>
int toh(char from,char to,char using,int count,int n)
{
	if(n==1)
	{
		printf("%c->%c\n",from,to);
		return count;
	}
	else
	{
		toh(from,using,to,count,n-1);
		printf("%c->%c\n",from,to);
		toh(using,to,from,count,n-1);
	}

}
int main()
{
	int count=toh('A','C','B',0,10);
	//printf("%d\n",count );
	return 0;
}
