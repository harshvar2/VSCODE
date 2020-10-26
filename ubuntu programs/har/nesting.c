#include<stdio.h>
int diff(int x,int y);
float ratio(int x,int y,int z);
int main()
{
int a,b,c;
printf("enter the values of a,b,c\n");
scanf("%d %d %d",&a,&b,&c);
printf("the ratio is %f\n",ratio(a,b,c));
}
float ratio(int x,int y,int z)
{
if(diff(y,z))
return(x/(y-z));
else
return(0.0);
}
int diff(int p,int q)
{
if(p!=q)
return(1);
else
return (0);
}
