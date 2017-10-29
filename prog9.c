#include<stdio.h>
#define ll long long int 
ll a[1000005];
int main()
{  ll i,t,j;
a[0]=a[1]=1;
for(i=2;i<1000005;i++)
{   if(a[i]==0)
    for(j=i*i;j<=1000005;j+=i)
    a[j]=1;
}
scanf("%lld",&t);
while(t--)
{ ll i,n,m,sum=0;
scanf("%lld %lld",&n,&m);
for(i=n;i<=m;i++)
if(a[i]==0)
sum+=i;
printf("%lld\n",sum);
}
return 0;
} 
