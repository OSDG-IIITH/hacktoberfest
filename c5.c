#include<stdio.h>
#include<string.h>
int main()
{
    int arr[105],i,j,count,size;
    size=0;
    for(i=0;arr[i]!='\0';i++)
    {
        scanf("%d",&arr[i]);
        size++;
    }
        printf("%d",size);
    for(i=0;i<size-1;i++)
    {
        count=0;
        for(j=i;i<size-1;j++)
        {
            if(arr[j]==arr[j+1])
            {
                count++;
            }
        }
        printf("%d",count);
        if(count>=7)
        {
            printf("YES");
            break;
        }
        else
        {
            printf("NO");
        }
    }
    return 0;
}


