public class ll {
    

    public static void main(String[] args)
{
  Node head = newNode(50);
  head.next = newNode(20);
  head.next.next = newNode(15);
  head.next.next.next = newNode(4);
  head.next.next.next.next = newNode(10);
 
  // Create a loop for testing
  head.next.next.next.next.next = head.next.next;
 
  Node res = detectAndRemoveLoop(head);
  if (res == null)
    System.out.print("Loop does not exist");
  else
    System.out.print("Loop starting node is " +  res.key);
}
}

}
