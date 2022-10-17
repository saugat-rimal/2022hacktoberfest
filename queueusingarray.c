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
  q->front=-1;
  q->rear=-1;
  q->Q=(int*)malloc(sizeof(int)*q->size);
  
}

void enqueue(struct queue *q,int data)
{
    if(q->rear==q->size-1)
    {
        printf("Queue is full");
    }
    else
    {
        q->rear++;
        q->Q[q->rear]=data;
    }

}

int dequeue(struct queue *q)
{
    int x;
    if(q->front==q->rear)
    {
        printf("Queue is empty");
    }
    else{
        q->front++;
         x=q->Q[q->front];
    }
    return x;
}

void Display(struct queue q)
{
    int x=q.front+1;
    while(x!=q.rear+1)
    {
        printf("%d ",q.Q[x]);
        x++;
    }
    printf("\n");
}
int main()
{
    struct queue q;
    printf("Enter the size: ");
    scanf("%d",&q.size);
    create(&q,q.size);
    for(int i=0;i<q.size;i++)
    {
        int x;
        scanf("%d",&x);
        enqueue(&q,x);
    }
    Display(q);
    dequeue(&q);
    Display(q);
    return 0;
    
}