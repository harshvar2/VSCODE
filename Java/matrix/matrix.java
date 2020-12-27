public class matrix {

    static void print2d(int mat[][]){
        for(int i = 0; i <mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                System.out.print(mat[i][j]+ " ");
            }
        }
        System.out.println("\n");
    }

    static void printspiral(int arr[][]){
        int m=4,n=4;
        int k=0,l=0;
        int last_row=m-1;
        int last_col=n-1;
        int i;
        while(k<=last_row && l<=last_col){

            for(i=l;i<=last_col;i++){
                System.out.print(arr[k][i]+" ");
                
            }
            k++;
            for(i=k;i<=last_row;i++){
                System.out.print(arr[i][last_col]+" ");
                
            }
            last_col--;
            if(k<=last_row){
                for(i=last_col;i>=l;i--){
                    System.out.print(arr[last_row][i]+" ");
                    
                }
                last_row--;
            }
            if(l<=last_col){
                for(i=last_row;i>=k;i--){
                    System.out.print(arr[i][l]+" ");
                    
                }
                l++;
            }
        }


    }
    public static void main(String args[]) {
        int mat[][]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        print2d(mat);
        printspiral(mat);
    }
}
