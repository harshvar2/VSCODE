//WAP to replace every dynamic array element by multiplication of previous and next of an n element.
   import java.io.*; 
   import java.util.*; 

public class armul {
    
 
    static void modifya(ArrayList<Integer> a){

        
        //USE Integer here instead of int to convert arraylist to array
        Integer[] arr=new Integer[a.size()];
        a.toArray(arr);
      
        int prev = arr[0]; 
        arr[0] = arr[0] * arr[1]; 
  
      
        for (int i=1; i<arr.length-1; i++) 
        { 
            int curr = arr[i]; 
            arr[i] = prev * arr[i+1]; 
           
            prev = curr; 
        } 
  
       
        arr[arr.length-1] = prev * arr[arr.length-1]; 

        System.out.println("Required array is:");
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
        sc.close();
        
        System.out.println("Original arry is:");
        System.out.print(arr);
        modifya(arr);
        
    }
}
