#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char name1[20],name2[20];
printf("Enter the first name\n");
gets(name1);
printf("Enter the second name\n");
gets(name2);
if(strcmp(name1,name2)==0) printf("Both the given strings are equal");
else printf("Both the given strings are not equal");
getch();
}
