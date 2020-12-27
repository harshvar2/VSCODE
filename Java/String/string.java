import java.util.HashMap;

public class string {

    static void printDups(String s) {

        HashMap<Character, Integer> h=new HashMap<>();
        for(int i=0;i<s.length;i++){
            h.put(s.charAt(i),h.getOrDefault(s.charAt(i), 0)+1);
        }

        for(Map.Entry<Character,Integer>e:h.entrySet()){
            System.out.println(e.getKey()+" "+e.getValue());
        }


    }

    public static void main(String args[]){
        String str = "test string"; 
        printDups(str); 
    }
    
}
