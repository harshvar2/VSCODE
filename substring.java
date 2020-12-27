import java.util.*;
public class substring {
    public static void main(String[] args){
       String s ="abc";
        HashSet<String> hs=new HashSet<String>();
    
        for(int i=0;i<s.length(); i++) {
            for(int j=i+1;j<=s.length();j++) {
        hs.add(s.substring(i,j));        
            }
        }
        System.out.print(hs);
    }
}
