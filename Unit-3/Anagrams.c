#include<stdio.h>
#include <string.h>

int main()
{
	int i=0,j=0,k=0,len1,len2,flag=0;
	char str1[20],str2[20],temp;
	char tempstr1[20],tempstr2[20];
	
	printf("Enter String1: ");
	scanf("%s",&str1);
	printf("Enter String2: ");
	scanf("%s",&str2);
	
	while(str1[k]!='\0')
	{
		tempstr1[k]=str1[k];
		k++;
	}
	len1=k;
	k=0;
	while(str2[k]!='\0')
	{
		tempstr2[k]=str2[k];
		k++;
	}
	len2 = k;	
	
	if(len1==len2)
	{
		for (i=0;i<len1;i++)
		{
			for(j=i+1;j<len1;j++)
			{
				if(str1[i]>str1[j])
				{
					temp = str1[i];
					str1[i]=str1[j];
					str1[j]=temp;
				}
			}
		}
		
		for (i=0;i<len2;i++)
		{
			for(j=i+1;j<len2;j++)
			{
				if(str2[i]>str2[j])
				{
					temp = str2[i];
					str2[i]=str2[j];
					str2[j]=temp;
				}
			}
		}
		for(i=0;i<len1;i++)
		{
			if(str1[i]==str2[i])
				flag=1;
			else
				flag=0;
				break;
		}
		
		if(flag==1)	
			printf("%s & %s are Anagrams",tempstr1,tempstr2);
		else 
			printf("%s & %s are not Anagrams",tempstr1,tempstr2);
	}
	
	else 
		printf("%s & %s are not Anagrams",tempstr1,tempstr2);	
	return 0;	
}
