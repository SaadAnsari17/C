#include<stdio.h>
#include<string.h>

int main()
{
FILE *fptr;
char data[100]="This file is generated";
fptr=fopen("File.txt","w");
if(fptr==NULL)
{
printf("Failed to open");
}
else
{
printf("THis file is now opened\n");
if(strlen(data)>0)
{
fputs(data,fptr);
fputs("\n",fptr);
}
fclose(fptr);
printf("SUccess\n");
printf("The file is close");
}
return 0;
}