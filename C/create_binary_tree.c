#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *lchild;
    int data;
    struct node *rchild;
}*root=NULL;

struct queue
{
    int size;
    int front;
    int rear;
   struct node **Q;
};

void create(struct queue *q,int size)
{
  q->size=size;
  q->front=0;
  q->rear=0;
  q->Q=(struct node**)malloc(sizeof(struct node*)*q->size);
  
}

void enqueue(struct queue *q,struct node* data)
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

struct node* dequeue(struct queue *q)
{
    struct node* x=NULL;
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

int isEmpty(struct queue q)
{
    return q.front==q.rear;
}

void treecreate()
{
    struct node *p,*t;
    int x;
    struct queue q;
    create(&q,100);

    printf("Enter root value: ");
    scanf("%d",&x);
    root=(struct node*)malloc(sizeof(struct node));
    root->data=x;
    root->lchild=root->rchild=NULL;
    enqueue(&q,root);

    while(!isEmpty(q))
    {
        p=dequeue(&q);
        printf("Enter left child of %d: ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            enqueue(&q,t);
        }

         printf("Enter right child of %d: ",p->data);
        scanf("%d",&x);
        if(x!=-1)
        {
            t=(struct node*)malloc(sizeof(struct node));
            t->data=x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            enqueue(&q,t);
        }
    }
}

void preorder(struct node *p)
{
    if(p)
    {
        printf("%d ",p->data);
        preorder(p->lchild);
        preorder(p->rchild);
    }
}

void inorder(struct node *p)
{
    if(p)
    {
        inorder(p->lchild);
        printf("%d ",p->data);
        inorder(p->rchild);
    }
}

void postorder(struct node *p)
{
    if(p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        printf("%d ",p->data);
    }
}

int main()
{
    treecreate();
    printf("Preorder representation: ");
    preorder(root);
    printf("\n");
    printf("Inorder representation: ");
    inorder(root);
    printf("\n");
    printf("Postorder representation: ");
    postorder(root);

}