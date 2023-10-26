//code  by Abhijit Kumar of Queue using Linked List Data Structure
#include<stdio.h>
#include <stdlib.h>
typedef struct Node
{
    /* data */
    int data;
    struct Node *next;
}node;
node * front=NULL;
node *rear=NULL;

node * makenode()
{
    struct Node *nw;
    nw=(node *)malloc(sizeof(struct Node));
    nw->next=NULL;
    return nw;
}
void insert(int da)
{
    node *nw;
    nw=makenode();
    if(nw==NULL)
    {
        printf("queue overflow\n");
    }
    else
    {
        nw->data=da;
        if(front==NULL)
        {
            front=nw;
        }
        else
        {
          rear->next=nw;  
        }
        rear=nw;
    }
}

void delet()
{
    int data;
    node *p;
    p=front;
    if(front==NULL)
    {
        printf("queue underflow\n");
    }
    else{
        data=p->data;
        if(front==rear)
        {
            front=rear=NULL;
        }
        else{
        front=front->next;
        }
    free(p);
    p=NULL;
    printf("%d",data);
    }
}

void traversal()
{
    node* p;
    p=front;
    while(p!=rear->next)
    {
        printf("%d ->",p->data);
        p=p->next;
    }
}

int main()
{
    int da,n;
    do{
    printf("enter the data\n");
    printf("1. insert\n");
    printf("2. delete \n");
    printf("3. traverse\n");
    printf(" 4. to exit\n");
    scanf("%d",&n);
    switch (n)
    {
    case 1:
        printf("enter the data\n");
        scanf("%d",&da);
        insert(da);
        /* code */
        break;
    case 2:
        delet();
        break;
    case 3:
        traversal();
        break;
    default:
        break;
    }
    }while(n!=4);
}
