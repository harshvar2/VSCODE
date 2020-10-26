#include<stdio.h>
int mul(int x,int y);
 int main()
{
int y;int a,b;
printf("enter the first number\n");
scanf("%d",&a);
printf("enter the second number\n");
scanf("%d",&b);
y=mul(a,b);
printf("the product is %d",y);
}
int mul(int x,int y)
{int p=x*y;
return(p);}

