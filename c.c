#include<stdio.h>
int main()
{
int i,j,k;
int ar[12345];
int N,Q;
int a,b,c;
if(scanf("%d %d",&N,&Q)){};

for(a=0;a<N;a++)
{
if(scanf("%d",&ar[a])){};
}
for(b=0;b<Q;b++)
{
	if(scanf("%d %d %d",&i,&j,&k)){};
	for(c=i;c<=j;c++)
		
		{
			ar[c]=ar[c]+k;
		}
	
}
for(a=0;a<N;a++)
printf("%d ",ar[a]);
return 0;
}



