#include<stdio.h>
#include<string.h>
void main()
{int l;
char str1[10]="harsh";
char str2[10]="jai hind";
printf("%s",str2);
char str3[19];

strcpy(str3,str1);
printf("string3 after copy is:%s\n",str3);
strcat(str1,str2);
printf("the new concantenated string is\n:%s",str1);
l=strlen(str1);
printf("\n the lenth off the string now is:%d",l);
}



