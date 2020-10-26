//NAIVE SOLUTION
O(1) __TIME__
O(n)space


int remdup(int arr[],int n)
{

int temp[];

temp[0]=arr[0];
int res=1;

for(int i=1;i<n;i++){

    if(temp[res-1]!=arr[i]){
        temp[res]=arr[i];
        res++;
    }
for(int i=0;i<res;i++){
    a[i]=temp[i];
}

}


}

//IN O(1) auxiliary space

int redmup(int a[],int n)
{
    int res=1;
    for(int i=1;i<n;i++){
        if(a[i]!=a[res-1]){
            a[res]=a[i];
            res++;
        }
    }


}