import java.util.Queue;

class test {
    
    
     class Node{
        Node left;
        Node right;
        int key;
        Node(int k){
            key=k;
        }
    }

    void inorder(Node root){
        if(root!=null){
        inorder(root.left);
        System.out.println(root.key+" ");
        inorder(root.right);
        }
    }
    void postorder(Node root){
        if(root!=null){
            postorder(root.left);
            postorder(root.right);
            System.out.println(root.key+" ");
        }

    }
    void preorder(Node root){
        if(root!=null){
            System.out.println(root.key+" ");
            preorder(root.left);
            preorder(root.right);
        }
    
    }

    int height(Node root) {
        if(root==null)
        return 0;
        else
        return Math.max(height(root.left),height(root.right)+1);
    }

    void nodeskdist(Node root,int k){
        if(root==null)return;
        if(k==0)
        System.out.println(root.key+" ");
        nodeskdist(root.left,k-1);
        nodeskdist(root.right,k-1);
    }


    void levelorder(Node root) {
        
        int h=height(root);
        
        for(int i=1;i<=h;i++){
            printthelevel(root,i);
            }
        }
    void printthelevel(Node root,int i){
        if(root==null)return;
        else
        {
            if(i==1)
            System.out.println(root.key+" ");
            else
            printthelevel(root.left,i-1);
            printthelevel(root.right,i-1);
        }
    }

    void levelorderopt(Node root){
        if(root==null)
        return ;
        Queue<Node> q=new LinkedList<Node>();
        q.add(root);
        while(q.isEmpty()==false){
            Node curr=q.poll();
            System.out.println(curr.key+" ");

            if(curr.left!=null){
                q.add(curr.left);
            }
            if(curr.right!=null)
            q.add(root.right);


        }



    }




    
    public static void main(String[] args){
        Node root=new Node(10);
        root.left=new Node(20);
        root.right=new Node(30);
        root.left.left=new Node(40);
    }
    
}
