#include<stdio.h>
int prod(int a,int b);
int main()
{int x=10,y=20;
int p,q;
p=prod(x,y);
q=prod(p,prod(x,z));
printf("%d %d \n",p,q);
}
int prod(int a,int b)
{return (a*b);}
