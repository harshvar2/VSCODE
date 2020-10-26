
public class myqueue {
     int size;
     int cap;
     int arr[];
     myqueue(int c){
        cap=c;
        size=0;
        arr=new int[cap];
     }


     void enque(int x){
        if(isfull()){return ;}
        
        arr[size]=x;
        size++;
     }
     void deque(){
         if(isempty()){
             return;
         }
         for(int i=0;i<size-1;i++){
             arr[i]=arr[i+1];
         }
         size--;
     }
     boolean isfull(){
         return (size==cap);
     }
     Boolean isempty(){
         return (size==0);
     }
     int getfront(){
         if(isempty()){
             return -1;
         }
         else
         return 0;
     }
     int getrear(){
         if(isempty()){
            return -1;
         }
         else
         return size-1;
     }
}
//Queue using array

class queuecarray{
    int front;
    int size;
    int cap;
    int arr[];
    queuecarray(int c){
        cap=c;
        size=0;
        front=0;
        arr=new int[cap];

    }
    Boolean isEmpty(){
        return(size==0);
    }
    Boolean isFull(){
        return(size==cap);
    }
    int getFront(){
        if(isEmpty())
            return -1;
            else
            return front;
        }
    
    int getRear(){
        if(isEmpty())
        return -1;
        else 
        return(front+size-1)%cap;
    }
    void enque(int x){
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }

    void deque(){
        if(isEmpty())
        return ;
        front=(front+1)%cap;
        size--;
    }
}
