#include<stdio.h>

int main()
{
	//variable declaration
	char a[101],b[101],c[202];
	int i=0,counta=0,countb=0,j=0,k=0;
	//read a
	scanf("%[a-zA-Z]s",a);

	//count no of charecters in a
	while(a[i]!='\0')
	{counta++;
	i++;
	};
	
	//converting all letters to small letters
	for(i=0;i<counta;i++)
	{if(a[i]>='A' && a[i]<='Z')
	a[i] = a[i]+32;
	};
	
	//removing vowels
	for(i=0;i<counta;i++)
	{if(a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && a[i]!='y')
	     {b[j]=a[i];
		j++;};
	};
	b[j]='\0';

	//counting no of charecters in b
	j=0;
	while(b[j]!='\0')
	{countb++;
	j++;};
	
	//inserting .
	for(k=0;k<countb;k++)
	{c[2*k+1]=b[k];
	c[2*k]='.';};
	
	c[2*k]='\0';

	printf("%s\n",c);

	return 0;
}
