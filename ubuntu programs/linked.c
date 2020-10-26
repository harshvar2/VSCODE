
#include<stdio.h>
#include<stdlib.h>
void createList(int);
void insertNodeBEG(int);
void displayList(void);
struct node{
    int data;
struct node *next;
}*head;


void createList(int n)
{
    struct node *newNode,*temp;
    int data,i;
    head=(struct node *)malloc(sizeof(struct node));
    //IF UNABLE TO ALLOCATE MEMORY FOR HEAD//
    if(head==NULL)
    {
        printf("UNABLE TO ALLOCATE MEMORY");

    }
    else
    {
        //READ DATA OF NODE FROM THE USER//
        printf("ENTER THE DATA OF NODE X:");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp=head;
    }

        //CREATE N NODES AND ADDS TO LINKED LIST//
        for(i=1;i<n;i++)
        {
            newNode=(struct node *)malloc(sizeof(struct node));
            //IF MEMORY ISNOT ALLOCATED FOR NEWNODE//
            if(newNode==NULL)
            {
                printf("UNALBLE TO ALLOCATE MOMORY");
                break;
            }
            else
            {
                {printf("ENTER THE DATA OF NODE %d:",i);
                scanf("%d",&data);
                newNode->data=data;
                newNode->next=NULL;
                temp->next=newNode;
                temp=temp->next;

                }
            }
            printf("SINGLE LINKED LIST CREATED SUCCESFULLY");
        }


}

    void insertb(int data)
    {
        struct node *newNode;
        newNode=(struct node *)malloc(sizeof(struct node));
        if(newNode==NULL)
        {
            printf("UNABLE TO ALLOCATE MEMORY");

        }
        else
        {
            newNode->data=data;
            newNode->next=head;
            head=newNode;
            printf("DATA INSERTED SUCCESFULLY");        }

    }

    //DISPLAY THE EDITED LIST//
    void displayList()
    {
        struct node*temp;
        //IF LIST IS EMPTY I.E.-HEAD==NULL//
        if(head==NULL)
        {
            printf("HEAD IS EMPTY");

        }
        else
        {
            temp=head;
            while(temp!=NULL)
            {
                printf("DATA =%d\n",temp->data);
                temp=temp->next;

            }
        }

    }
    int main()
{
    int n,data;
    //CREATE A SINGLE LINKED LIST OF N NODES//
    printf("ENTER THE TOTAL NO. OF NODES");
    scanf("%d",&n);
    createList(n);
    printf("\n DATA IN THE LIST\n");
    displayList();
    //INSERT DATA AT THE BEGINNING OF THE SLL//
    printf("ENTER THE DATA TO INSERT IN THE BEGINNING OF THE LIST");
    scanf("%d",&data);
    insertb(data);
    printf("\n THE DATA AFTER EDITING IS:");
    displayList();
    return 0;

}


