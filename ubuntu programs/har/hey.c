#include<stdio.h>
#include<ctype.h>

#include<math.h>



void main()
{

int n,x[50],y[50],sumx=0,sumy=0,sum=0;
float rn,x2=0,y2=0,rd1,rd2,rd,r,q1,qx,q3,qy,rtotal,mx,mxy;
printf("enter the no. of observations you want");
scanf("%d",&n); 
printf("Enter the values of x and y\n");
for(int i=1;i<=n;i++)
{
scanf("%d %d\n", &x[i],&y[i]);
}

for(int i=1;i<=n;i++)
{
printf("the values of X and Y entered are ");
printf("%d \t %d\n ",x[i],y[i]);
}



for(int i=1;i<=n;i++)
{ sum= sum +x[i]*y[i];
  sumx=sumx+x[i];
  sumy=sumy+y[i];
}


rn=(n*sum)-(sumx*sumy);

for(int i=1;i<=n;i++)
{x2=x2+x[i]*x[i];
y2=y2+y[i]*y[i];
}
rd1=sqrt(n*x2-(sumx*sumx));
rd2=sqrt(n*y2-(sumy*sumy));
rd=rd1*rd2;
r=(rn/rd);

q1=(x2/n)-((sumx*sumx)/(n*n));
qx=sqrt(q1); 

q3=(y2/n)-((sumy*sumy)/(n*n));
qy=pow(q3,0.5);


rtotal=((r*qx)/qy);
mx=((r*qx)/qy);
mxy=((r*qy)/qx);
//THE EQUATION OF REGRESSION LINE OF X ON Y


printf("THE EQUATION OF REGRESSION LINE OF X ON Y \n\t x-%d=%f(y-%d\n)",x[1],mx,y[1]);


//THE EQUATION OF REGRESSION LINE OF X ON Y


printf(" THE EQUATION OF REGRESSION LINE OF Y ON X\t\n y-%d=%f(x-%d)",y[1],mxy,x[1]);
printf("\n\n\n");
//THE EQUATION OF LINEIN THE FORM AX+BY+C=0
printf("THE EQUATION OF LINEIN THE FORM AX+BY+C=0\n");

printf("%fx-(%f)y +%f=0",qy,r*qx,(qy*x[1]+r*qx*y[1]));







}






