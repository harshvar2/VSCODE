class LinkedList{
    Node head;
    static class Node{
        int data;
        Node next;
        //Constructor to create a new node
        Node(int d){
            data=d;
            next=null;
        }
    }

    public static void main(String args[]){
        LinkedList list=new LinkedList();
        list.head=new Node(1);
        Node second=new Node(2);
        Node third=new Node(3);
        list.head.next=second;
        second.next=third;

        list.Printlist();
    }
    public void Printlist(){
        Node n=head;
        while(n!=null){
            System.out.print(n.data+" ");
            n=n.next;
        }
    }
    public void push(int new_data){
        Node new_node=new Node(new_data);
        new_node.next=head;
        head=new_node;
    }
    public void insertAfter(Node prev_node,int new_data){

        if(prev_node==null){
        System.out.println("The given previous node cannot be null"); 
        return;
        }
        Node new_node=new Node(new_data);
        new_node.next=prev_node.next;
        prev_node.next=new_node;

    }
    public void insertEnd(int new_data){
        Node temp=new Node(new_data);
        if(head==null){
           head=new Node(new_data);
           return;
        }
        temp.next=null;
        Node last=head;
        while(last.next!=null){
            last=last.next;
        }

        last.next=temp;
        return;
    }

    public void deleteNode(int key){
        Node temp=head;
        Node prev=null;
        //If the head data matches with the key

        if(temp!=null && temp.data==key){
            head=temp.next;
            return;
        }
        while(temp!=null && temp.data!=key){
            prev=temp;
            temp=temp.next;
        }
        if(temp==null){
            return;
        }

        prev.next=temp.next;
        temp.next=null;

    }

    //Delete a node at a given position
    public void deleteNodepos(int position){
        if(head==null){
            return;
        }
        Node temp=head;

        //if the head node is the position
        if(position==0){
            head=temp.next;
            return;
        }
        //Store the node before the position
        for(int i=0;temp!=null && i<position-1;i++){
            temp=temp.next;
        }
        //if position is more than the number of nodes
        if(temp==null|| temp.next==null){
            return;
        }
        Node next=temp.next.next;
        temp.next=next;
    }

} 


