#include<stdio.h>

int main()
{
    int numer, denom, remainder;
    FILE* inpFil;
    FILE* outFil;
    inpFil = fopen("inputFile","r");
    outFil = fopen("out.txt","a");

    fscanf(inpFil,"%d",&numer);
    fscanf(inpFil,"%d",&denom);

    remainder = numer%denom;

    if (remainder == 0)
    {
        // Do whatever is to be done if the expression evaluates to TRUE
	fprintf(outFil,"%d is a multiple of %d\n", numer, denom);
    }
    else
    {
        // Do whatever is to be done if the expression evaluates to NOT TRUE
	fprintf(outFil,"%d is NOT a multiple of %d\n", numer, denom);
    }

    fclose(inpFil);
    fclose(outFil);

    return 0;
}
