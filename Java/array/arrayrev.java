import java.util.*;
public class arrayrev {
    static void reverse(int arr[],int n) {
        int temp=0;
        for(int i=0;i<n/2;i++){
             temp=arr[i];
            arr[i]=arr[n-i-1];
            arr[n-i-1]=temp;
        }
        System.out.println("\nREversed array is");
        for(int i=0;i<n;i++)
        System.out.print(arr[i]+" ");
    }


    //Using java Collections class
    static void reverseArray(Integer a[]){
        Collections.reverse(Arrays.asList(a));
        System.out.println(Arrays.asList(a));
    }

    public static void main(String args[]){
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n=sc.nextInt();
        int[] arr=new int[n];
        for(int i=0;i<n;i++){
            arr[i]=sc.nextInt();
        }
        System.out.println("Original arry is:");
        for(int i=0;i<n;i++)
        System.out.print(arr[i]+" ");

        Integer [] b = {10, 20, 30, 40, 50}; 
         
        reverse(arr,arr.length);
        reverseArray(b);
    }
     




}
