#include <stdio.h>
#include <string.h>

int main()
{
    
    int i, length;
    int flag=0;
    char string[10];

    printf("Enter a string:");
    scanf("%s", string);
    
    length = strlen(string);
    
    for(i=0;i < length/2 ;i++)
    {
        if(string[i] != string[length-i-1])
        {
            flag = 1;
            break;
            
	    }
	}
    
    if (flag)
     {
        printf("%s is not a palindrome\n", string);
     }    
    else 
    {
        printf("%s is a palindrome\n", string);
    }
    return 0;
}