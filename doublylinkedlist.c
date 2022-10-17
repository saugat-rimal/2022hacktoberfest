#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node* prev;
    int data;
    struct node* next;
}*first=NULL;

void create(int A[],int n)
{
    struct node *t,*last;
    int i;

    first=(struct node*)malloc(sizeof(struct node));
    first->data=A[0];
    first->prev=first->next=NULL;
    last=first;
    for(i=1;i<n;i++)
    {
        t=(struct node*)malloc(sizeof(struct node));
        t->data=A[i];
        t->next=last->next;
        t->prev=last;
        last->next=t;
        last=t;
    }
}

void Display(struct node* p)
{
    while(p!=NULL)
    {
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}
struct node* insertatbegging()
{
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=first;
    scanf("%d",&ptr->data);
    ptr->prev=NULL;
    ptr->next=first;
    first->prev =ptr;
    Display(ptr);
}
struct node* insertatend()
{
    struct node*ptr;
    ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=first;
    scanf("%d",&ptr->data);
    while(p->next!=NULL)
    {
       p= p->next;
    }
    ptr->next=NULL;
    ptr->prev=p;
    p->next=ptr;
    Display(first);
}
void deleteatbeggining()
{
    struct node*p=first->next;
    p->prev=NULL;
    free(first);
    Display(p);
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    create(a,n);
    Display(first);
    // insertatbegging();
    // insertatend();
    deleteatbeggining();
    
    return 0;

}