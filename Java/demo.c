#include<stdlib.h>
#include <stdio.h>
#include<time.h>
void IS(int a[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key = a[i];
        int j= i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
int main()
{
    clock_t s1,s2,s3,e1,e2,e3;
    int a[]={3,5,0,6,8,9,4,10};
    int b[]={1,2,3,4,5,6,10,11};
    int c[]={8,9,6,5,4,3,2,1};
    s3 = clock();
    IS(c,8);
    e3 =clock();
    printf("worst time  = %li\n",(long int)(e3-s3));
    s1 = clock();
    IS(a,6);
    e1 =clock();
    printf("Average time  = %li\n",(long int)(e1-s1));
    s2 = clock();
    IS(b,6);
    e2 =clock();
    printf("Best time  = %li\n",(long int)(e2-s2));
   
    return 0;
}