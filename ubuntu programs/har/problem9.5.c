#include<stdio.h>
#include<conio.h>
int minpos(float [],int);
void main()
{
int n;
float x[10]={12.5,3.0,4.0,5.9,9.2,9.3,2.4,77.3,88.4,99.7};
printf("enter the value of n\n");
scanf("%d",&n);
if(n>=1 && n<=10)
;
else
{printf("invalid value of n,press any key to terminate the program");
getch();
exit(0);
}
printf("in the array the first minimum value of the aarray is stored in the position %d.n",minpos(x,n));
getch();
}
int minpos(float a[],int N)
{
int i.index;float min=9999.99;
for(i=0;i<N;i++)
if(a[i]<min)
{min-a[i];
index=i;
}
return(index);
}

