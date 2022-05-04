#include<stdio.h>
#include<string.h>
int main()
{
    char str1[50],str2[50],str3[50]=" ";
    int len,mid,tmp,i;
    printf("Enter String 1: ");
    gets(str1);
    printf("Enter String 2: ");
    gets(str2);

    if(strcmp(str1,str2)==0){
        printf("Both are same\n");
    }
    else{
        printff("Both are different\n");
    }
    strcat(str3,str1);
    strcat(str3," ");
    strcat(str3,str2);
    printf("Concatenated String:%s\n",str3);

    len=strlen(str3);
    mid=len/2;
    for(i=0;i<mid;i++){
        tmp=str3[len-1-i];
        str3[len-1-i]=str3[i];
        str3[i]=tmp;
    }
    printf("Reversed String:%s\n ",str3);
    printf("End of code\n");
    return 0;


}