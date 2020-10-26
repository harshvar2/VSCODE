
 class mystackll {
    node head;
    int sz;
    mystackll(){
        head=null;
        sz=0;
    }
    static class node{
        int data;
        node next;
        node(int d){
            data=d;
            next=null;
        }
    
    }

    void push(int x){
        node temp=new node(x);
        temp.next=head;
        head=temp;
        sz++;
    }
    int pop(){
        if(head==null){
            return Integer.MAX_VALUE;
        }
        int res=head.data;
        head=head.next;
        sz--;
        return res;
    }
    int peek(){
        if(head==null){
            return Integer.MAX_VALUE;
        }
        return head.data;
    }
    int size(){
        return sz;
    }
    Boolean isempty(){
        return (head==null);
    }

    public static void main(String args[]){
    
    }
}
