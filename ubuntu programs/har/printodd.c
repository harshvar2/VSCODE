#include<stdio.h>
void main()
{int n,d,o;
printf("enter the number");
scanf("%d",&n);
printf("the number entered is %d",n);
while(n>0)
{
d=n%10;
o=d%2;
n=n/10;
if(o!=0)
printf("\nthe odd number is %d\n",d);
}
}

