#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct Node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    struct node *p=ptr;
    do
    {
    printf("Element: %d\n",p->data);
    p=p->next;
    }while(p!=ptr);
}
struct node *insertAtFirst(struct node *head,int data)
{
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    
    ptr->data=data;
    struct node *p=head->next;
    while(p->next!=head)
    {
       p=p->next;
    } 
    p->next=ptr;  
    ptr->next=head;
    head=ptr;
    return head;

}
int main()
{
    struct node *head;
   struct node *second;
   struct node *third;
   struct node *fourth;
   head=(struct node *)malloc (sizeof(struct node));
   second=(struct node *)malloc (sizeof(struct node));
   third=(struct node *)malloc (sizeof(struct node));
   fourth=(struct node *)malloc(sizeof(struct node));
   head->data=7;
   head->next=second;

   second->data=8;
   second->next=third;

   third->data=83;
   third->next=fourth;

   fourth->data=754;
   fourth->next=head;

   linkedlistTraversal(head);
   printf("\n");
   head=insertAtFirst(head,80);
   linkedlistTraversal(head);
}