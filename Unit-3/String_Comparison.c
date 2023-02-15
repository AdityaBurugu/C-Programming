#include <stdio.h>
#include <string.h>

int main(){
    char string1[20],string2[20];
    int i, len1,len2;
    int flag = 0;
    
    printf("Enter a String1:");
    scanf("%s", string1);
    
    printf("Enter a String2:");
    scanf("%s", string2);
    
    len1 = strlen(string1);
    len2 = strlen(string2);
    
    if (len1==len2)
    {
	    for(i=0;i < len1 ;i++)
		{
			if (string1[i]==string2[i])
				flag=1;
			else
			{
				flag=0;
				break;
			}
				
	    }
    }
    
    else
    	flag=0;
		    
    if (flag==1) 
        printf("Both Strings are same");
    
    else 
        printf("Both Strings are not same");

    return 0;
}
