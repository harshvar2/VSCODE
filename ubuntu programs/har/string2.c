#include<stdio.h>
void main()
{
char line[80];
fgets(line,sizeof(line),stdin);
printf("%s",line);
}
