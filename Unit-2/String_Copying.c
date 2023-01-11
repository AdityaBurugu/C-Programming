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
strcpy(name1,name2);
printf("After copying the name1=%s,name2=%s",name1,name2);
getch();
}
