#include<stdio.h>
void main()
{
int n,d,o,sum=0;int temp;
printf("enter the number");
scanf("%d",&n);
temp=n;
while(n>0)
{d=n%10;
o=d%2;
n=n/10;
if(o==0)
sum=sum+d;
}
printf("the sum of the od digits of the number %d is %d",temp,sum);
}
