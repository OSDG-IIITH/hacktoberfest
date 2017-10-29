#include<stdio.h>

void ToH(int N, char source, char dest, char inter)
{
    if(N==1)
    {
        printf("%c -> %c\n", source, dest);
        return;
    }

    ToH(N-1, source, inter, dest);
    printf("%c -> %c\n", source, dest);
    ToH(N-1, inter, dest, source);
    return;
}

int main()
{
    ToH(4, 'A', 'C','B');
    return 0;
}
