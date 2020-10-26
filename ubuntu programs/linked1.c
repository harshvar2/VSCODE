
#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next,*prev;
	int data;
};
void main()
{
	struct node *curr,*head=NULL;
	struct node *ptr=NULL;
	for(int i=0;i<4;i++)
	{
		curr=(struct node *)malloc(sizeof(struct node));
		curr ->next=NULL;
		curr ->prev=NULL;
		curr ->data=random()%10;
		if(head==NULL)
			head=ptr=curr;
		else
		{
			curr ->prev=ptr;
			ptr ->next=curr;
			ptr=curr;
		}
	}
	struct node *ptr1=head;
	while(ptr1!=NULL)
	{
		printf("%d ",ptr1 ->data);
		ptr1=ptr1 ->next;
	}
	int pos=0,v=0;
	printf("\n Enter the position at which the element is to be inserted: ");
	scanf("%d",&pos);
	printf("\n Enter the value to be inserted: ");
	scanf("%d",&v);
	printf("\n");
	curr=(struct node *)malloc(sizeof(struct node));
	curr ->data=v;
	curr ->next=NULL;
	if(pos==0)
	{
		curr ->next=head;
		head ->prev=curr;
		head=curr;
	}
	else
	{
		ptr=head;
		int i=1;
		while(i<pos && ptr ->next!=NULL)
		{
			i++;
			ptr=ptr ->next;
		}
		if(ptr ->next==NULL)
		{
			curr ->prev=ptr;
			ptr ->next=curr;
		}
		else
		{
			curr ->prev=ptr;
			curr ->next=ptr ->next;
			ptr ->next=curr;
			ptr ->next->prev=curr;
		}
	}
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr ->data);
		ptr=ptr ->next;
	}
}
