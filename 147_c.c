#include<stdio.h>
int sieve[1000001];

void gen_sieve()
{
//	printf("ENTER\n");
	sieve[0]=1;
	sieve[1]=1;
	int i,j,k;
	for(i=0;i<1000000;i++)
		sieve[i]=0;
	//odd
	for(i=3;i<1000;i=i+2)
	{
		if(sieve[i]==0)
			for(j=i;k<1000000;j=j+2)
			{	
				k=j*i;
				sieve[k]=1;
			}
	}
	//even
	for(i=2;i<=500000;i++)
		sieve[i*2]=1;
}
int is_prime[1000001];
void find_prime()
{
	int i;
	is_prime[0]=0;
	for(i=1;i<1000001;i++)
		if(sieve[i]==0)
			is_prime[i]=is_prime[i-1]+1;
		else
			is_prime[i]=is_prime[i-1];
}
int main()
{
	int a,b,k;
        int x,y;	
	int l=0;
	int p=1000001;
	gen_sieve();
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&k);
	find_prime();
	if( (is_prime[b]-is_prime[a-1] )< k )
			printf("-1\n");
	//printf("%d %d\n",is_prime[b],is_prime[a]);
	else
	{
		for(x=a;x<=b-l+1;x++)
		{
			if(a>2 || k!=2) 
				y=x+2*k-2;
			else
				y=x+1;
			while(is_prime[y]-is_prime[x-1]<k)
				y++;
			p=y-x+1;
			if(p>l)
				l=p;
		}	
		printf("%d\n",l);
	}
	//printf("OK\n");
//	printf("%d %d %d %d %d",sieve[4],sieve[5],sieve[6],sieve[12],sieve[13]);
}
