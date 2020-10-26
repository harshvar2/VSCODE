#include<stdio.h>
int main(){
    char *c[]={"D","L","S"};
    int **i= &c[0];
    printf("%c\n",**i);
    
}