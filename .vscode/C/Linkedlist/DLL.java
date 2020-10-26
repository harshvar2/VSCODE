public class DLL {
    Node head;
    static class Node{
        int data;
        Node next;
        Node prev;

        Node(int d){
            data=d;

        }
    }

    void insertend(int new_data){
        Node temp=new Node(new_data);
        if(head==null){
            head=temp;
            return;
        }
        
        Node last=head;
        while(last.next!=null){
            last=last.next;
        }
        last.next=temp;
        temp.prev=last;

    }

      Node Insertbegin(Node h, int data) {
        Node new_node = new Node(data);
        new_node.next = head;
        if (head != null)
            head.prev = new_node;
        return new_node;
    }

    public void printlist(Node h) {

        Node last = h;
        Node hello = null;
        System.out.println("Traversal in forward Direction");
        while (last != null) {
            System.out.print(last.data + " ");
            hello = last;
            last = last.next;
        }
        System.out.println();

        // Traverse the linked list in reverse direction
        // starting from the last node using the previous
        // node's pointer present at each node
        System.out.println("Traversal in reverse direction");
        while (hello != null) {
            System.out.print(hello.data + " ");
            hello = hello.prev;
        }
    }
     Node reverseDll(Node head){
        Node curr=head;
        if(head==null|| head.next==null){
            return head;
        }
        Node prev=null;
        while(curr!=null){
            prev=curr.prev;
            curr.prev=curr.next;
            curr.next=prev;

            curr=curr.prev;

        }
        return prev;

    }
    public static void main(String args[]) {
        DLL dll = new DLL();
        dll.insertend(6);
        dll.insertend(7);
        dll.insertend(8);
        
        dll.insertend(9);
        dll.head=dll.Insertbegin(dll.head, 10);
        
        System.out.println("Created DLL is: "); 
        dll.printlist(dll.head); 
    }
}
