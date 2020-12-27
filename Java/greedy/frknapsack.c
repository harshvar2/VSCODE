#include <stdio.h>
#include <stdlib.h>
 
typedef struct 
{
    int weight, value;
}Items;
 
int compfunc(const void *p, const void *q) 
{ 
    int w1 = ((Items *)p)->weight; 
    int v1 = ((Items *)p)->value;
    double r1 = v1 / w1;
 
    int w2 = ((Items *)q)->weight; 
    int v2 = ((Items *)q)->value;
    double r2 = v2 / w2;
 
    return (r2 - r1); 
}
 
double fractionalKnapsack(Items arr[], int n, int knapsack_capacity)
{
    qsort((void*)arr, n, sizeof(arr[0]), compfunc);
    int curWeight = 0;
    double finalvalue = 0.0;
    for(int i = 0 ; i < n ; i++)
    {
         if (curWeight + arr[i].weight <= knapsack_capacity) 
        { 
            curWeight += arr[i].weight; 
            finalvalue += arr[i].value; 
        } 
  
        else
        { 
            int remain = knapsack_capacity - curWeight; 
            finalvalue += arr[i].value * ((double) remain / arr[i].weight); 
            break; 
        } 
    }
    return finalvalue; 
}
 
int main()
{
    Items arr[] = {{1,9},{2, 10}, {3, 5}, {5, 15}, {7, 7},{1, 6}, {4, 18}, {1, 3}};
    int n = sizeof(arr)/sizeof(arr[0]);
    int knapsack_capacity = 15;
    printf("Items: ");
    for(int i=0;i<n;i++)
    {
        printf("(%d, %d) ",arr[i].weight, arr[i].value);
    }
    printf("\n");
    printf("Maximum value we can obtain = %.3lf\n",fractionalKnapsack(arr, n, knapsack_capacity));
    return 0;
}
