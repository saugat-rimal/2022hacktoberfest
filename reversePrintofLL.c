#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
} *first=NULL;

void create_list(int a[],int n)
{
    struct node *t, *last;
    first = malloc(sizeof(struct node));
    first->data = a[0];
    first->next = NULL;
   last=first;

   for(int i=1;i<n;i++)
   {
    t=(struct node*)malloc(sizeof(struct node));
    t->data=a[i];
    t->next=NULL;
    last->next=t;
    last=t;
   }
}

void display_reverse(struct node *head)
{
    struct node *p;
    p=head;
   while (p != NULL)
    {
    display_reverse(p->next);
    printf("%d ", p->data);
        return;
    }
   
}

int main()
{
    int n;
   printf("Enter the size of the Linked List: ");
   scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
    scanf("%d",&a[i]);
   }
   create_list(a,n);
    display_reverse(first);
    return 0;
}




