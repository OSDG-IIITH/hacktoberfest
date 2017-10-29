#include <stdio.h>

int main()
{
        float num1,num2,num3,sum,product;
        scanf("%f %f %f", &num1, &num2, &num3);
        sum=num1+num2+num3;
        product=num1*num2*num3;
        printf("%.2f %.2f", sum, product);
        return 0;
}
