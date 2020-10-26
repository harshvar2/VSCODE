 class mystack {
    int arr[];
    int top;
    int cap;
    mystack(int c){
        cap=c;
        top=-1;
        arr=new int[c];
    }
    void push(int x){
        if(top==cap-1){
            System.out.println("ARRAy is full");
        }
        top++;
        arr[top]=x;
    }
    int pop(){
        if(top==-1){
            System.out.println("ARRAy is empty");
        }
        int res=arr[top];
        top--;
        return res;
    }
    int peek(){
        return arr[top];
    }
    int size(){
        return top++;

    }
    boolean isempty(){
        return (top==-1);
    }

    public static void  main(String args[]){
        mystack s=new mystack(10);
        s.push(5);
        s.push(10);
        s.push(15);
        System.out.println(s.size());
        System.out.println(s.pop());
        
    }
}
