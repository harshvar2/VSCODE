import java.util.Arrays;
import java.util.Collections;

//13.WAP to sort rows of a dynamic matrix having m rows and n columns in ascending and columns in descending order.


public class matrixsort{


    static void sorti(Integer mat[][]){
        //Rowise sort
        Integer b[][]=new Integer[mat.length][mat[0].length];
        Integer c[][]=new Integer[mat.length][mat[0].length];
        for(int i=0; i <b.length; i++)
        Arrays.sort(b[i]);
        //Transpose of the matrix 
        for(int i=0; i <mat.length; i++){
            for(int j=0; j <mat[i].length; j++){
                b[i][j]=mat[j][i];
            }
        }
        //Rowwise sort in descending order
        for(int i=0; i <b.length; i++)
        Arrays.sort(b[i],Collections.reverseOrder());
        
        //Transpose again 
        for(int i=0; i <mat.length; i++){
            for(int j=0; j <mat[i].length; j++){
                c[i][j]=b[j][i];
            }
        }
        for(int i = 0; i <mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                System.out.print(c[i][j]+ " ");
            }
        }
        System.out.println("\n");
    }
    static void print2d(Integer mat[][]){
        for(int i = 0; i <mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                System.out.print(mat[i][j]+ " ");
            }
        }
        System.out.println("\n");
    }

    public static void main(String args[]) {
        Integer mat[][]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
        print2d(mat);
        sorti(mat);

    }
}
