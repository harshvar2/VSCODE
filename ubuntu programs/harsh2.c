#include<stdio.h>
void main()
{
int x[3];
printf("enter the three elements");
scanf("%d %d %d \n",&x[0],&x[1],&x[2]);
for(int i=0;i<3;i++)
{printf("%d",x[i]);
printf("\n");
}
}
