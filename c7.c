#include<stdio.h>
#include<string.h>
int main()
{
    char arr1[105];
    int i,j,temp;
    scanf("%[123+]",arr1);
    for(i=strlen(arr1)-1;i>0;i-=2)
    {
        for(j=0;j<i;j+=2)
        {
            if(arr1[j]>arr1[j+2])
            {
                temp=arr1[j];
                arr1[j]=arr1[j+2];
                arr1[j+2]=temp;
            }
        }
    }
    printf("%s",arr1);
    return 0;
}


