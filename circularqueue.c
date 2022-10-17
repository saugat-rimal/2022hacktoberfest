#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int size;
    int front;
    int rear;
    int *Q;
};

void create(struct queue *q,int size)
{
  q->size=size;
  q->front=0;
  q->rear=0;
  q->Q=(int*)malloc(sizeof(int)*q->size);
  
}

void enqueue(struct queue *q,int data)
{
    if((q->rear+1)%q->size==q->front)
    {
        printf("Queue is full\n");
    }
    else
    {
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=data;
    }

}

int dequeue(struct queue *q)
{
    int x=-1;
    if(q->front==q->rear)
    {
        printf("Queue is empty\n");
    }
    else{
        q->front=(q->front+1)%q->size;
         x=q->Q[q->front];
    }
    return x;
}

void Display(struct queue q)
{
    int x=q.front+1;
  do
    {
        printf("%d ",q.Q[x]);
        x=(x+1)%q.size;
    }  while(x!=(q.rear+1)%q.size);
    printf("\n");
}

int maximum(struct queue q)
{
    int x=q.front+1;
    int max=q.Q[x];
    while(x!=(q.rear+1)%q.size)
    {
        if(q.Q[x]>max)
        {
            max=q.Q[x];
        }
        x=(x+1)%q.size;
    }
    return max;
}

struct node
{
    int data;
    struct node *next;
}*top=NULL;

void push(int x)
{
    struct node *ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL)
    printf("Stack is full\n");
    ptr->data=x;
    ptr->next=top;
    top=ptr;
    
}

void pop()
{
    struct node *ptr;
    int x=-1;
    if(top==NULL)
    printf("Stack is Empty\n");
    else
    {
        ptr=top;
        top=top->next;
        x=ptr->data;
        free(ptr);
    }
    printf("%d ",x);
}

void Displaystack()
{
    struct node *p;
    p=top;
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
int main()
{
    struct queue q;
    printf("Enter the size: ");
    scanf("%d",&q.size);
    create(&q,q.size+1);
    for(int i=0;i<q.size-1;i++)
    {
        int num;
        scanf("%d",&num);
        enqueue(&q,num);
    }
    // enqueue(&q,89);
    // enqueue(&q,76);
    // enqueue(&q,85);
    // enqueue(&q,96);
    // enqueue(&q,43);
    // enqueue(&q,23);
    Display(q);
    // printf("%d\n",dequeue(&q));
    printf("Maximum number in the queue: %d\n",maximum(q));
    for(int i=0;i<q.size-1;i++)
    {
        push(dequeue(&q));
    }
    for(int i=0;i<q.size-1;i++)
    {
        pop();
    }
    return 0;
    
}