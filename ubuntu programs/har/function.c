#include<stdio.h>
int main()
{
int x,y;
double power(int,int);
printf("enter the x andt\n");
scanf("%d %d ",&x,&y);
printf("%d to the power %d is %f",x,y,power(x,y));
}
double power(int x,int y)
{
double p=1.0;
if(y>=0)
while(y--)
{p*=x;}		
else
while(y++)
{p/=x;}
return(p);
}




