#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;
    int L[n1],R[n2];
    int i,j,k;

    for( i=0;i<n1;i++){
        L[i]=a[l+i];
    }
    for( j=0;j<n2;j++){
        R[j]=a[m+1+j];
    }

    i=0;j=0;k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            a[k]=L[i];
            i++;

        }
        else{
            a[k]=R[j];
            j++;
        }
        k++;
    }
    //Copying remaining elements 
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;

    }
    while (j<n2)
    {
        a[k]=R[j];
        j++;
        k++;        /* code */
    }
    

}

void mergesort(int a[],int l,int r){

    if(l<r){
        int mid=l+(r-l)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }

    


}

void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

}
int main(){
    int arr[]={12,11,13,5,6,7};
    int arr_size=sizeof(arr)/sizeof(arr[0]);
    printf("the given array is\n");
    printarray(arr,arr_size);
    mergesort(arr,0,arr_size-1);

    printf("\nSorted array is\n");
    printarray(arr,arr_size);


return 0;
}