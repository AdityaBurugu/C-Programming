#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name[20];
printf("Enter any name\n");
gets(name);
strrev(name);
printf("The reverse of a given name is %s",name);
getch();
}
