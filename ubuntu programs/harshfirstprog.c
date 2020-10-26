#include<stdio.h>
void main()
{int i;
float x[10],a,total;
printf("enter the 10 real numbers");
for(i=0;i<10;i++)
{scanf("%f",&a);
x[i]=a;
}
total=0.0;
for(i=0;i<10;i++)
total=total+x[i]*x[i];
printf("\n");
for(i=0;i<10;i++)
printf("x[%2d] = %5.2f\n",i,x[i]);
printf("\n total=%f\n",total);
}
