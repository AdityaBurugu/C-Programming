#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name [20];
printf("Enter any name\n");
gets(name);
strlwr(name);
printf("The converted name is %s",name);
getch();
}
