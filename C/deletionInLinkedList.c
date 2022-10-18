#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while(ptr!=NULL)
    {
    printf("Element: %d\n",ptr->data);
    ptr=ptr->next;
    }
}
struct node *deleteAtFirst(struct node *ptr)
{
    struct node *p=ptr;
    ptr=ptr->next;
    free(p);
    return ptr;
}
struct node *deleteAtIndex(struct node *head,int index)
{
    struct node *ptr=head;
    struct node *p=head ->next;
   for(int i=0;i<index-1;i++)
   {
     ptr=ptr->next;
     p=p->next;
   }
   ptr->next=p->next;
   free(p);
    return head;
}
struct node *deleteAtEnd(struct node *ptr)
{
     struct node *p=ptr;
     struct node *q=ptr->next;
     while(q->next!=NULL)
     {
        p=p->next;
        q=q->next;
     }
     p->next=NULL;
     free(q);
     return ptr;
}
struct node *deleteValue(struct node *head,int value)
{
    struct node *p=head;
     struct node *q=head->next; 
     while(q->data!=value && q->next!=NULL)
     {
        p=p->next;
        q=q->next;
     }  
     if(q->data==value)
     {
       p->next=q->next;
       free(q);
     }
     
     return head;
}
int main()
{
  struct node *head;
  struct node *second;
  struct node *third;
  struct node *fourth;

 second=(struct node*)malloc(sizeof(struct node));
  head=(struct node*)malloc (sizeof(struct node));
  third=(struct node*)malloc (sizeof(struct node));
  fourth=(struct node*)malloc (sizeof(struct node));
  
   head->data=7;
   head->next=second;

   second->data=8;
   second->next=third;

   third->data=83;
   third->next=fourth;

   fourth->data=754;
   fourth->next=NULL;

   linkedlistTraversal(head);
   printf("\n");
//   head= deleteAtFirst(head);
head=deleteAtIndex(head,2);
//    head=deleteAtEnd(head);
// head=deleteValue(head,8);
   linkedlistTraversal(head);

}