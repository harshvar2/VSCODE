import java.util.ArrayList;

class Ystack{
    ArrayList<Integer> al=new ArrayList<>();

    void push(int x){
        al.add(x);
    }

    int pop(){
        int res=al.get(al.size()-1);
        al.remove(al.size()-1);
        return res;
    }

    int peek(){
        return al.get(al.size()-1);
    }

    Boolean isempty(){
        return al.isEmpty();
    }

    int size(){
        return al.size();
    }
}