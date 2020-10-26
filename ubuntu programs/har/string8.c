#include<stdio.h>
int main()
{char s1[100],s2[100];
printf("enter string 1\n");
scanf("%s",s1);
printf("enter string 2\n");
scanf("%s",s2);
int i=0;
while(s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0')
{i=i+1;}
if(s1[i]=='\0' && s2[i]=='\0')
printf("the strings are equal\n");
else
printf("the strings are not equal");		

}
