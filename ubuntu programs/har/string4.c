#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
char   s[100];
printf("enter the string\n");
scanf("%s",s);
int vow=0,cons=0,i=0;
while(s[i]!='\0')
{
if(s[i]=='a' || s[i]=='A' || s[i]=='e' || s[i]=='E' || s[i]=='i' || s[i]=='I' ||s[i]=='o' ||s[i]=='O' || s[i]=='u' || s[i]=='U')
vow=vow+1;
else
cons++;
i++;
}
printf("the no. of vowels are %d\n",vow);
printf("the no. of consonants are %d\n",cons);
}
