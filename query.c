#include <stdio.h>
int main()
{
int i,n,lower,higher,k,q;
scanf("%d %d",&n,&q);
int a[n],b[n],sum[n],cusum[n];
for(i=0;i<n;i++)
{
          scanf("%d",&a[i]);
          b[i]=a[i];
        if(i==0)
           sum[0]=a[0];
        else
           sum[i]=sum[i-1]+a[i];//sum[] to store cumulative sums of orig. array
}
while(q--)
{
          scanf("%d %d %d",&lower, &higher, &k);
          b[lower]+=k;
          if(higher!=n-1)       
          b[higher+1]-=k;
}
cusum[0]=b[0];                  //cusum[] to store cumulative sums of updated array
for(i=1;i<n;i++)
{
          cusum[i]=cusum[i-1]+b[i];
}
for(i=0;i<n;i++)
{
          printf("%d ",a[i]+cusum[i]-sum[i]);       //manipulation of  new value of each element 
}
return 0;
}



