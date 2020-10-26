#include<stdio.h>
#include <stdlib.h>
#include<string.h>

void main()
{printf("enter a string");
char a[50];
char *p=a;
scanf("%s",p);
printf("%s",*p);
int length;
while(*p!='\0')
{
printf("%c is stored at the address %u",*p,p);
p++;
length++;}
printf("%d",length);
}
