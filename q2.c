#include<stdio.h>
#define ll long long int
ll a[1000005],b[1000005],c[1000005];
int main()
{ ll i,n;
scanf("%lld",&n);
ll count=0;
for(i=0;i<n;i++)
{
scanf("%lld",&a[i]);
if(a[i]<0)
b[-a[i]]++;
else
c[a[i]]++;
}
for(i=0;i<1000005;i++)
if(b[i]>1)
count++;
for(i=0;i<1000005;i++)
if(c[i]>1)
count++;
printf("%lld\n",count);
 
return 0;   
}

