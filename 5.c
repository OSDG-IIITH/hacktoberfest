#include<stdio.h>
int main()
{

	long long int n,v,sum,count,j,i,least,x;
	int t,p;
	scanf("%d",&t);

	for(p=1;p<=t;p++)
	{
		scanf("%lld%lld",&n,&v);
                long long int a[n];
		
		for(i=0;i<n;i++)
		{scanf("%lld",&a[i]);}

		for(i=0;i<n-1;i++)
		{least=i;
			for(j=i+1;j<n;j++)
			{
				if(a[j] < a[least])
				{least=j;}
			}
			x=a[i];
			a[i]=a[least];
			a[least]=x;
		}

		sum=0;
                count=0;
               int flag=0;
		for(i=n-1;i>=0;i--)
		{
			sum=sum + a[i];
			count++;
			if(sum >= v)
			{  flag=1;
                           break;}
                          
                       
		}
               
                 if(flag==0)
                 {printf("-1\n");}
              
                  else if (flag==1)
	          {printf("%lld\n",count);}

	}

}
