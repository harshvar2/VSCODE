#include<stdio.h>
void main()
{int n,i,d,o,temp;
printf("enter the number\n");
scanf("%d",&n);
o=n%2;
switch(o)
{case 0: printf("the number %d is even",n);break;
case 1:printf("the number %d is odd",n);break;
default :printf("it is not a number");
}

}
