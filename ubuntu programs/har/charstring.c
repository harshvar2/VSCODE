#include<stdio.h>
int main()
{
char line[80],chr;
int c=0;
printf("enter text ,Press return at the end\n");
do{
chr=getchar();
line[c]=chr;
c++;}
while(chr!='\n');
c=c-1;
line[c]='\0';
printf("\n%s\n",line);
}


