#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
int x;
printf("Enter any name\n");
gets(name);
x=strlen(name);
printf("The length of a given string is %d",x);
getch();
}
