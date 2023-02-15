# include<stdio.h>

int main()
{
	char s1[10],s2[10],s3[10];
	int i=0,j=0;
	
	printf("Enter String 1: ");
	scanf("%s",&s1);
	
	printf("Enter String 2: ");
	scanf("%s",&s2);
	
	while(s1[i]!='\0')
	{
		s3[j]=s1[i];
		i++;
		j++;
	}
	i=0;
	
	while(s2[i]!='\0')
	{
		s3[j]=s2[i];
		i++;
		j++;
	}
	
	s3[j]='\0';
	
	printf("%s",s3);
	return 0;
}
