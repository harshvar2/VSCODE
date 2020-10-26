#include<stdio.h>
void main()
{
int sum=0,sum2=0,sum3=0,netsum,n;
printf("\n ENTER THE NUMBER ");
scanf("%d",&n); 
for(int i=3;i<n;i=i+3)
{sum=sum+i;}
for(int j=5;j<n;j=j+5)
{sum2=sum2+j;}
for(int k=15;k<n;k+=15)
{sum3=sum3+k;}
netsum=sum+sum2-sum3;
printf("\n%d",netsum);
}

