#include<stdio.h>
int main()
{
	int i;
	char a[50];
	char *p;
	printf("Enter the string : ");
	gets(a);
	p=a;
	while(*p!='\0')
	{
		printf("%c",*p);
		p++;	}
}
