#include<stdio.h>

int main()
{
        int T;
        scanf("%d",&T);
        while(T>0)
        {
                int a[200];
                int n, i, j, carry, digits, digitprod;
                scanf("%d",&n);
                a[0]=1;
                digits=1;
                carry = 0;
                for(i=1; i<=n; i++)
                {
                        for(j=0; j<digits; j++)
                        {
                                digitprod = carry + a[j]*i;
                                a[j]=digitprod%10;
                                carry = digitprod/10;
                        }
                        while(carry>0)
                        {
                                a[digits] = carry%10;
                                carry= carry/10;
                                digits++;
                        }
                }
                for(i=digits-1;i>=0;i--)
                {
                        printf("%d",a[i]);
                }
                printf("\n");
                T=T-1;
        }
        return 0;
}
