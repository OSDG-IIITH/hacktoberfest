#include<stdio.h>
int main()
{
long long int N;
long long int i,j,k,l,sum=1;
long long int count[1000001];
scanf("%lld",&N);
long long int ip[N];

for(i=0;i<N;i++)   
	scanf("%lld",&ip[i]);
for(k=0;k<2;k++)
{
	count[ip[k]]=1;
}

i=0;
j=1;
while(j<N)
{	
	 if(count[ip[j]]>=2)
	 {
		
		count[ip[i]]--;
		i++;
	 }
	 else
	 {
			
			l=j-i+1;
			sum+=((l*(l+1))/2);
			j++;
			if (j<N)
			count[ip[j]]++;
			}
}
printf("%lld\n",sum);
	return 0;
}
