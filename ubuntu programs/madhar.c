
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

main()
{
    struct node *head;
    void create(struct node *h);
    int count(struct node *h);
    void print(struct node *h);
    head=(struct node*)malloc(sizeof(struct node));
    create(head);
    printf("\n");
    print(head);
    printf("\n");
    printf("NUMBER OF ITEMS=%d \n",count(head));

}

void create(struct node *h)
{
    printf("INPUT A NUMBER");
    printf("TYPE -999 TO END");
    scanf("%d",&h->data);
    if(h->data==-999)
    {h->next=NULL;}
    else//CREATE NEXT NODE//
    {
h->next=(struct node*)malloc(sizeof(struct node));
create(h->next);//RECURSION//
   }
    

return ;}
void print(struct node *h)
{
if(h->next!=NULL)
{printf("%d--->",h->data);//print CURRENT ITEM//
if(h->next=NULL)
printf("%d",h->next->data);
print(h->next);
}
return ;
}

int count(struct node *h)
{
    if(h->next==NULL)
    return(0);
    else
    return(1+count(h->next));
}
	
	
	

