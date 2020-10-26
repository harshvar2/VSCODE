#include<stdio.h>
void main()
{
char s1[80],s2[80];
int i=0;
printf("enter the string you want to copy\n");
scanf("%s",s2);
for(i=0;s2[i]!='\0';i++)
s1[i]=s2[i];
s1[i]='\0';
printf("the string after copying is\n");
printf("\n");
printf("%s",s1);
printf("the number of charecters is %d",i);
}
