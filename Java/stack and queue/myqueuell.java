public class myqueuell {
    
    class Node{
        int data;
        Node next;
        Node(int x){
            data=x;
            next=null;
        }
    }


    

    Node front,rear;
    myqueuell(){
        front=rear=null;
    }

    void enque(int x){
        System.out.print(x);
        
    }
}
