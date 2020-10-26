#include<stdio.h>

factorial(int n)
{int fact;
if(n==1)
return(1);
else
fact=n*factorial(n-1);
return(fact);
}
