#include<stdio.h>

int isPrime(int number, int nPrimes, int pList[], int limit)
{
    int prime=1;
    if(number != 2)
    {
        for(int i=0; pList[i] <= limit; i++)
        {
            if(number%pList[i] == 0)
            {
                prime = 0;
                break;
            }
        }
    }
    return prime;
}

int main()
{
    int primeList[1000000], numPrimes=0;
    int number, i, limit=1;
    // printf("Enter a number: ");
    // scanf("%d",&number);
    number = 10000000;
    if(number <2)
    {
        printf("No primes up to %d\n",number);
        return 0;
    }
    primeList[numPrimes] = 2;
    numPrimes++;
    for(i=3; i<=number; i+=2)
    {
	if((limit+1)*(limit+1) <= i) limit++;

        if(isPrime(i, numPrimes, primeList, limit) == 1)
        {
            primeList[numPrimes] = i;
            numPrimes++;
        }
     }

    // printf("There are %d primes less than %d\n", numPrimes, number);
    // for(i=0; i<numPrimes; i++)
        // printf("%d ", primeList[i]);
    printf("%d\n",primeList[numPrimes-1]);
    return 0;
}









