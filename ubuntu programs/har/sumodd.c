#include<stdio.h>
int main()
{
int a[50];int i,n;
int sum=0;printf("enter the order of numbre");
scanf("%d",&n);
printf("enter the number");
for(i=0;i<n;i++)
{scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{continue;
}
else
sum=sum+a[i];
}

printf("th sum of the odd digits is %d",sum);
return 0;
}
