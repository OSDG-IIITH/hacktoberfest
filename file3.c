#include<stdio.h>

int factorial(int N)
{
    printf("N=%d, and it is at: %p\n",N, &N);
    int a=5, b=-2;
    if(N==0) return 1;
    int fn1 = factorial(N-1);
    return(N*fn1);
} 

int main()
{
    printf("Factorial(10) is: %d\n",factorial(10));
    return 0;
}
