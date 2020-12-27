//.WAP to arrange the elements of a dynamic array such that all even numbers are followed by all odd numbers.

import java.io.*; 
import java.util.*; 
public class arraysegregate {
    
    static void segregateevenodd(ArrayList<Integer> a){

        
        //USE Integer here instead of int to convert arraylist to array
        Integer[] arr=new Integer[a.size()];
        a.toArray(arr);
        int left=0,right=arr.length-1;
        while(left<right){
            while(arr[left]%2==0 && left<right)
            left++;
            while(arr[right]%2==1 && left<right)
            right--;

            if(left<right){
                int temp=arr[left];
                arr[left]=arr[right];
                arr[right]=temp;
                left++;
                right--;
            }
        }

        System.out.println("\nSegregated array is:");
        for(int i=0;i<arr.length;i++)
        System.out.print(arr[i]+" ");
    }
    public static void main(String args[]){
        
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int n=sc.nextInt();
        
        ArrayList<Integer> arr=new ArrayList<Integer>(n);
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        
        System.out.println("Original arry is:");
        System.out.print(arr);
        segregateevenodd(arr);
        
    }
}
