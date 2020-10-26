#include<stdio.h>
#include<string.h>
void display(char ch());

int main(){
char c[1000];printf("enter the name");
fgets(c,sizeof(c),stdin);
display(c);
return 0;
}
void display(char ch())
{
printf("the string is");
puts(ch);
}


