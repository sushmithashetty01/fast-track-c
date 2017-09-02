
#include<stdio.h>
#include<ctype.h>
int Word_Line_Count(char ch,FILE*fp);
int main()
{
  FILE *fp;
  char ch;
 
  fp = fopen("Sample.txt","r");
 if(fp == NULL)
 {
   printf("Cannot open the file");
   return 1;
 }
   else
  {
	  ch = fgetc(fp);
	  Word_Line_Count(ch,fp);
  }
   fclose(fp);
   
   return 0;
}

int Word_Line_Count(char ch,FILE*fp)
{
   int space=0,line=0,character=0,tab=0;
   while(ch!=EOF)
	{
           character++;
          // printf("%c",ch);
	   if(ch=='\n')
               line++;
           if(isspace(ch))
               space++;
           if(ch=='\t')
               tab++;
         ch = fgetc(fp);
	}
      printf("Characters in the file are:%d\n",character);
       printf("Tabs in the file are:%d\n",tab);
       printf("Spaces in the file are:%d\n",space);
      printf("Lines in the file are:%d\n",line);
return 0;
}