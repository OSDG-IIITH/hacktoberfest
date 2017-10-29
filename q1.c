#include<stdio.h>
#include<string.h>
int main()
{
		int i,j,l,count=0;
		char s[1000000];
		char k[1000000];
		scanf("%s",s);
		l=strlen(s);
		char z;
		for(i=0;i<l;i++)
		{
				k[i]=s[i];
		}
		for(j=0;j<l;j++)
		{
				for(i=0;i<l;i++)
				{
						z=s[i];
						s[i]=s[l-1];
						s[l-1]=z;
				}
				count++;
				if(strcmp(s,k)==0)
				{
						printf("%d\n",count);
						break;
				}
		}
		return 0;
}

