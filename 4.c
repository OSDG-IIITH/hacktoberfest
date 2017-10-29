#include <stdio.h>

int main()
{
	
	
	
	
		char s[1000005];
		int len,i,c1=0;
scanf("%d",&len);		
scanf("%s",s);
		
		for(i=0;i<len;i++)
		{
			if (s[i]=='(')
			{
				c1++;
			}
			if (c1>0 && s[i]==')')
			{
				c1--;
			}
		}
		if (c1==0)
			printf("YES\n");
		else 
			printf("NO\n");
	
	return 0;
}
