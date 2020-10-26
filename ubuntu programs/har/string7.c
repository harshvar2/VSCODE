#include<stdio.h>
void main()
{char firstname[10]={"viswas"};
char middlename[10]={"rao"};
char lastname[10]={"hadri"};
char name[30];
int i,j,k;
for(i=0;firstname[i]!='\0';i++)
name[i]=firstname[i];
name[i]=' ';
for(j=0;middlename[j]!='\0';j++)
name[i+j+1]=middlename[j];
name[i+j+1]=' ';
for(k=0;lastname[k]!='\0';k++)
name[i+j+k+2]=lastname[k];
name[i+j+k+2]='\0';
printf("\n\n");
printf("%s\n",name);
}




