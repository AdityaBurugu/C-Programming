#include<stdio.h>
#include <string.h>

int main()
{
	int i,j,len;
	char str1[20],temp;
	printf("Enter String: ");
	scanf("%s",&str1);
	len=strlen(str1);
	for (i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
		{
			if(str1[i]>str1[j])
			{
				temp = str1[i];
				str1[i]=str1[j];
				str1[j]=temp;
			}
		}
	}
	
	for (i=0;i<len;i++)
	{
		if (i != len-1)
		{
			printf("%c",str1[i]);
		}
		else
		{
			printf("%c",str1[i]);
		}
	}
	
	return 0;	
}
