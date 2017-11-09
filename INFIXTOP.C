#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#define MAX 20
char st[MAX];
int top=-1;
char postfix[20];
char pop();
void push();
int getpriority(char);
void infixtopostfix(char);
void main()
{
char infix[20];
clrscr();
printf("\nEnter Infix Expression:\n");
gets(infix);
void infixtopostfix(infix);
printf("\nPostfix Expression:\n");
puts(postfix);
getch();
}
void infixtopostfix(char infix)
{
 char source[20], op[20], cha[20];
 int i=0,j=0;
 strcpy(source,infix);
 while(source[i]!='\0')
 {
  if(source[i]=='(')
  {
   op[j]=source[i];
   j++;
  }
  else if(isdigit(source[i]) || isalpha(source[i]))
  {

  }
 }
}