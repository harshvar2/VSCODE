#include<stdio.h>
void main()
{
int n,i=1,sum=0;
printf("enter ht enume");
scanf("%d",&n);
while(i<n)
{if(n%i==0)
sum=sum+i;
i++;
}
if(sum==n)
printf("%d is a perfect number",n);
else 
printf("%d is not a perfect number",n);
}
