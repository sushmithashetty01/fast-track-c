 
#include<stdio.h>
 
int stringlen(char*);
 
int main()
{
   char str[20];
   int length;
 
   printf("Enter a string : ");
   fgets(str,20,stdin);
 
   length = stringlen(str);
   
   printf("\n length of a string %s is %d\n", str, length-1);
 
  return 0;
}
 
int stringlen(char*p) 
{
   int count = 0;
   while (*p != '\0') 
   {
      count++;
      p++;
   }
   return count;
}

