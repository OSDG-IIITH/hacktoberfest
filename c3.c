#include<stdio.h>
int main()
{
    int n,i,arr[5],sum,count=0;
    scanf("%d",&n);
    while(n--)
    {
        sum=0;
        for(i=0;i<3;i++)
        {
            scanf("%d",&arr[i]);
            sum+=arr[i];
        }
        if(sum>=2)
        {
            count++;
        }
    }
    printf("%d",count);
return 0;
}


