#include <stdio.h>

int main()
{
        int celsius;
        float fahrenheit;

        scanf("%d", &celsius);

        fahrenheit=(1.8 * celsius) + 32;
        printf("%d degrees Celsius is %.1f degrees Fahrenheit", celsius, fahrenheit);

        return 0;
}
