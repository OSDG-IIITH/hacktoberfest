#include<stdio.h>
int main()
{
	int x1,x2,x3,x4,y1,y2,y3,y4;
	scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
	if(x2-x1!=0 && y2-y1!=0 && x2-x1 != y2-y1 && x1-x2 != y2-y1)
		printf("-1");
	else if(x2-x1==0)
		printf("%d %d %d %d",x1+y2-y1,y1,x1+y2-y1,y2);
	else if(y2-y1==0)
                printf("%d %d %d %d",x1,y1+x2-x1,x2,y1+x2-x1);
	else
		printf("%d %d %d %d",x1,y2,x2,y1);
	return 0;
}
