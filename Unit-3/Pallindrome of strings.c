#include <stdio.h>
#include <string.h>

int main(){
    char string1[20];
    int i, length;
    int flag = 0;
    
    printf("Enter a String or a Number:");
    scanf("%s", string1);
    
    length = strlen(string1);
    printf("Reverse:");
    
    for(i=0;i < length ;i++)
	{
		printf("%c",string1[length-i-1]);
    }
    for(i=0;i < length ;i++)
	{
        if(string1[i] != string1[length-i-1])
		{
            flag = 1;
            break;
        }
    }
		    
    if (flag==1) {
        printf("\n%s is not a palindrome", string1);
    }    
    else {
        printf("\n%s is a palindrome", string1);
    }
    return 0;
}
