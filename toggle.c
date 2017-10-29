#include <stdio.h>
int main()
{
        unsigned int N,k,a,b,c,temp1,temp2;
        scanf("%u %u", &N, &k);
        a=1<<k;
        temp1=N^a;
        b=~temp1;
        printf("%u\n", b);
        temp2=b^a;
        c=~temp2;
        printf("%u", c);
        return 0;
}
