#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
}*front=NULL,*rear=NULL;

void enqueue(int data)
{
    struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    if(t==NULL)
    printf("Queue is full\n");

    else
    {
        t->data=data;
        t->next=NULL;
        if(front==NULL)
        front=rear=t;
        else{
            
        rear->next=t;
        rear=t;
        }
    }
}

int dequeue()
{
    int x=-1;
    struct node*t;
    if(front==NULL)
    printf("Queue is empty\n");
    else
    {
        t=front;
        front=front->next;
       x=t->data;
        free(t);
    }
    return(x);
}

void display()
{
    struct node *p=front;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    display();
    printf("%d",dequeue());
}
