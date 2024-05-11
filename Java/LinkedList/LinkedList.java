class Node {
    int data;
    Node next;

    Node(int data) {
        this.data = data;
    }
}

public class LinkedList {
    public static void main(String[] args) {
        Node n1 = new Node(10);
        Node n2 = new Node(20);
        Node n3 = new Node(30);

        Node head = n1;
        head.next = n2;
        n2.next = n3;
        n3.next = null;

        Node curr = head;
        while (curr != null) {
            System.out.println(curr.data);
            curr = curr.next;
        }
        System.err.println("Inserting a new element in linked list" + "\n");
        // insert an elevemtn in linked list
        insert(40, head, 2);
        curr = head;
        while (curr != null) {
            System.out.println(curr.data);
            curr = curr.next;
        }
        System.err.println("Deleting an element from linked list" + "\n");
        // delete an element from linked list
        delete(head, 2);
        curr = head;
        while (curr != null) {
            System.out.println(curr.data);
            curr = curr.next;
        }

    }

    static void insert(int data, Node head, int pos) {
        Node toAdd = new Node(data);
        // base condition
        if (pos == 0) {
            toAdd.next = head;
            head = toAdd;
            return;
        }

        Node prev = head;
        for (int i = 0; i < pos - 1; i++) {
            prev = prev.next;
        }
        toAdd.next = prev.next;
        prev.next = toAdd;
    }

    static void delete(Node head,int pos){
        // base condition
        if(pos==0){
            head=head.next;
            return;
        }

        Node prev=head;
        for (int i = 0; i < pos-1; i++) {
            prev=prev.next;
        }
        //  In java, if there is no reference to a node in linked list, garbage collector will take it off.
        prev.next=prev.next.next;
    }
}
