#include<stdio.h>
#include<stdlib.h>
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
    printf("%d\n",x);
}

void Display()
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
    push(10);
    push(20);
    push(30);
    Display();
    pop();
    Display();
}