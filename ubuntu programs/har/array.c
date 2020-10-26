#include<stdio.h>
void main()
{int n=10;
float x[10];
printf("enter the ten numbers");
for(int i=0;i<n;i++)
{scanf("%10f",&x[i]);}
float total=0.0;
for(int i=0;i<10;i++)
{total=total+x[i]*x[i];}
printf("\n");
for(int i=0;i<10;i++)
printf("x[%d]=%5.2f\n",i+1,x[i]);
printf("\n total=%f\n",total);
}

