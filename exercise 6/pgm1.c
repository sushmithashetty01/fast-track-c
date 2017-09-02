#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	FILE *fp;
	char ch;
	fp=fopen("file.txt","r");
	if(fp==NULL){
		printf("Cannot open file\n");
		exit(0);
	}
	printf("\nfile.txt contents\n\n");
	while((ch=fgetc(fp))!= EOF)
		printf("%c",ch);
	fclose(fp);
	return 0;
}