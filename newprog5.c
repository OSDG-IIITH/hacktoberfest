#include<stdio.h>
int main()
{  long long int t;
scanf("%lld",&t);
while(t--)
{
    long long int flag=1,tempsum=0,sum=0,temp,j,i,n,v,k=0;
scanf("%lld %lld",&n,&v);
long long int a[n];
for(i=0;i<n;i++)
scanf("%lld",&a[i]);
for(i=0;i<n;i++)
    tempsum+=a[i];
if(tempsum<v)
flag=0;
for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        if(a[j]>a[i])
        { temp=a[j];
          a[j]=a[i];
          a[i]=temp;
        }
        if(sum<v)
        {
            sum+=a[i];
             k++;
        }
       if(sum>=v)
       break;
    }
if(flag)
printf("%lld\n",k);
else
printf("-1\n");
}
return 0;
}
