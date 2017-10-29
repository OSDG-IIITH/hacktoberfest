#include<stdio.h>
int main()
{
    int k,n,i,j,arr[55],temp,count,num;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        num=arr[k-1];
    }
    for(i=n-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    count=0;
    for(i=0;i<n;i++)
    {
        if((arr[i]>=num)&&(arr[i]>0))
        {
            count++;
        }
    }
    printf("%d",count);
return 0;
}


