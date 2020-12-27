//11.Write a program to replace every element in the dynamic array with the next greatest element present in the same array.

import java.io.*; 
import java.util.*; 
public class arrayreplace {
    
    static void replacegreater(ArrayList<Integer> a){

        
        //USE Integer here instead of int to convert arraylist to array
        Integer[] arr=new Integer[a.size()];
        a.toArray(arr);
        int max=arr[arr.length-1];
        arr[arr.length-1]=-1;

        for(int i=arr.length-2;i>=0;i--){

            int temp=arr[i];

            arr[i]=max;

            if(temp>max){
                max=temp;
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
        while(sc.hasNextInt()//<-- This will loop untill you enter any non integer value
        ){
            arr.add(sc.nextInt());
        }
        sc.close();
        System.out.println("Original arry is:");
        System.out.print(arr);
        replacegreater(arr);
        
    }
}