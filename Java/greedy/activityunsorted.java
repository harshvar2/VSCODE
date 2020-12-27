import java.util.Collections;

public class activityunsorted {
    
    class Activity{
        int start;int finish;
    }
    
    static void print_Max_Activities(Activity arr[],int n){


        Collections.sort(arr);
        int i,j;

        System.out.println("Following activities are selected:");


        //First activity is always selected
        i=0;
        System.out.print("["+arr[i].start+","+arr[i].finish+"] ");
        //Consider rest of activities
        for(j=1;j<n;j++){

            if(arr[j].start>=arr[i].finish){
            System.out.print("["+arr[i].start+","+arr[i].finish+"] ");
            i=j;
            }
        }
    }
    
    public static void main(String args[]){

        Activity arr[]={{5, 9}, {1, 2}, {3, 4}, {0, 6}, {5, 7}, {8, 9}};
        int n=arr.length/arr[0].length;
        print_Max_Activities(arr,n);
    }

}
