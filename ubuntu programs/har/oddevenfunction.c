#include<stdio.h>
void call(void);
void main()
{
call();
}
void call(void)
{
int n,i,d,o,temp;
printf("enter the number\n");
scanf("%d",&n);
o=n%2;
if(o==0)
printf("\nthe even number is %d\n",n);
else
printf("the entered number %d is odd\n",n);

}

