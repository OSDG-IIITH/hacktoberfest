#include <stdio.h>
int main()
{
        int number,binary=0,digit,i=0,count=0;
        scanf("%d", &number);
        while(number>0)
        {
                digit=number%2;
                count=count+digit;
                number=number/2;
        }
        printf("%d", count);
        return 0;
}
