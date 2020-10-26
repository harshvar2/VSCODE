
public class bst {

    class Node{
        Node left;
        Node right;
        int key;
        Node(int k){
            key=k;
        }
    }

    Node root;
    
    bst(){
        root=null;
    }
    //Recursive Binary search
    public Node search(Node root,int x){

        if(root==null|| root.key==x)
        return root;
        else if(x>root.key)
        return search(root.right,x);
        else
        return search(root.left,x);            
        }
    



    //Iterative Binary search
    Boolean searchrecursive(Node root,int x)
    {
        while(root!=null){
            if(root.key==x)
            return true;
            else if(root.key<x)
            root=root.right;
            else 
            root=root.left;
        }
        return false;
    }

    // This method mainly calls insertRec()
    void insert(int key) {
        root = insertkey(root, key);
     } 

    //Recursive Insert in a bst
    Node insertkey(Node root,int x){
        Node new_node=new Node(x);
        if(root==null)
        return new_node;
        else if(x>root.key)
        root.right=insertkey(root.right,x);
        else
        root.left=insertkey(root.left,x);

        return root;
    }


    //Iterative insert in bst(MOre optimsed than recursive)
    Node insertkeyoptimised(Node root,int x){
        Node temp=new Node(x);
        Node parent=null;
        Node curr=root;
        while(curr!=null){
            parent=curr;
            if(x>curr.key)
            curr=curr.right;
            else if(x<curr.key)
            curr=curr.left;
            else
            return root;
        }

        if(parent==null)
        return temp; 
        if(x>parent.key)
        parent.right=temp;
        else
        parent.left=temp;
        return root;

    }
    // This method mainly calls inorderRec()
    void inorder() {
        inorderRec(root);
    }

    // A utility function to do inorder traversal of BST
    void inorderRec(Node root) {
        if (root != null) {
            inorderRec(root.left);

            System.out.print(root.key+" ");
            
            inorderRec(root.right);
        }
    }

    Node delNode(Node root,int x){

        //If the tree is empty
        if(root == null)
        return root;
        //Otherwise ,recur down the tree
        if(x<root.key)
        root.left = delNode(root.left,x);
        else if(x>root.key)
        root.right = delNode(root.right,x);

        //If the x is same as the root key then this is the node to be deleted
        else
        {
            //node with only 1 child left or right
            if(root.right==null)
            return root.left;
            else if(root.left==null)
            return root.right;

            //node with both children left and right
            //getting the inorder successor
            Node successor=getsucc(root);
            root.key=successor.key;
            root.right=deleted(root.right,successor.key);
        }
        
    }
    Node getsucc(Node root){

        Node curr=root.right;
        while(curr!=null&& curr.left!=null)
        curr=curr.left;
        return curr;
        
        
    }

    Node floor(Node root,int x){
        Node res=null;
        while(root!=null){
            if(root.key==x)
            return root;
            else if(x<root.key)
            root=root.left;
            else{   
                    res=root;
                    root=root.right;

               }       
            }
        return res;
    }
    Node ceil(Node root,int x){

        
        while(root!=null){
            if(root.key==x)
            return root;
            else if(x>root.key)
            {
                root=root.right;
            }
            else{ res=root;
                root=root.left;
                
            }

        }
        return root;
    }
    public static void main(String[] args){
            bst b=new bst();
            b.insert(50);
            b.insert(30);
            b.insert(20);
            b.insert(40);
            b.insert(70);
            b.insert(60);
            b.insert(80);
            b.inorder();
        }
    }





