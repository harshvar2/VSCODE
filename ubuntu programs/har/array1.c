#include<stdio.h>
#define ROW 5
#define COLUMN 5
int main()
{
int row,column,product[ROW][COLUMN];
int i,j;
printf("the multiplication table is\n");
printf("------------------------\n");
printf("  ");

for(j=1;j<=ROW;j++)
printf("%d",j);
printf("\n");
for(i=1;i<=ROW;i++)
{row=i;
printf("%d|",row);
for(j=1;j<=COLUMN;j++)
{column=j;
product[i][j]=row*column;
printf("%d",product[i][j]);
}
printf("\n");
}
}

