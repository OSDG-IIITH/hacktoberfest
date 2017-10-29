#include<stdio.h>
int main()
{
    int i,n,count=0;
    scanf("%d",&n);
    int ar1[1000000];
    int ar2[2000001];
    for(i=0;i<2000001;i++)
        ar2[i]=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar1[i]);
                int c=ar1[i]+1000000;
              ar2[c]++;
    }
     for(i=0;i<2000001;i++)
         {
         if(ar2[i]>1)
         count++;
         }
         printf("%d\n",count);
    return 0;
}
