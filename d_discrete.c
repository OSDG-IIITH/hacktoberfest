	#include<stdio.h>

	int main()
	{
		unsigned long long p,test,x,y,m,n;

		scanf("%llu",&test);

		for(;test>0;test--)
		{
			scanf("%llu%llu%llu",&x,&y,&m);
			
			x%=m;

			p=1;

		for(;y>0;y/=2)
		{
			if(y & 1)
				p=(p*x)%m;

			x=(x*x)%m;
		}
			printf("%llu ",p);
		}

		return 0;
	}