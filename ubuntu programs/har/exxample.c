#include<stdio.h>
void mathorp(int x,int ,int *s,int *d);
int main()
{
int x=20,y=10,s,d;
mathorp(x,y,&s,&d);
printf("s=%d\n d=%d\n",s,d);
}
void mathorp(int a,int b,int *sum,int *diff)
{*sum=a+b;
*diff=a-b;
}

