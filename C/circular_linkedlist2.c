#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*head;
void create(int n){
    struct node *t,*last;
    head=(struct node *)malloc(sizeof(struct node));
    int x;
    scanf("%d",&x);
    head->data=x;
    head->next=head;
    last=head;
    for(int i=1;i<n;i++){
         t=(struct node *)malloc(sizeof(struct node));
         int m;
         scanf("%d",&m);
         t->data=m;
         t->next=head;
         last->next=t;
         last=t;
    }

}
void display(struct node *p){
    do{
        printf("%d ",p->data);
        p=p->next;
    }while(p!=head);
    printf("\n");
}
void insertion(int pos ,int l){
    if(pos==0){
        struct node *p=head;
        for(int i=0;i<l-1;i++){
            p=p->next;
        }
       struct node *t=(struct node *)malloc(sizeof(struct node));
       int f;
       scanf("%d",&f);
       t->data=f;
       p->next=t;
       t->next=head;
       head=t;


    }else if(pos>0){
        struct node *p=head;
        for(int i=1;i<pos-1;i++){
            p=p->next;
        }
        struct node *t=(struct node *)malloc(sizeof(struct node));
       int f;
       scanf("%d",&f);
         t->data=f;
         t->next=p->next;
         p->next=t;
    }
}
   void deletion(struct node *p ,int psn,int lt){
     struct node *q;
    if(psn>0){
   
    for(int i=1;i<=psn-2;i++){
        p=p->next;
    }
    q=p->next;
    p->next=q->next;
    free(q);
    }else if(psn==0){
      for(int i=1;i<=lt-1;i++){
        p=p->next;
      }
      q=p->next;
      p->next=q->next;
      free(q);
      head=q->next;

    }
    
   }

int main(){
    printf("the size of circular linkedlist\n");
    int k;
    scanf("%d",&k);
    create(k);
    display(head);
    // insertion(0,k);
    // display(head);
    // insertion(3,k);
    // display(head);
    // deletion(head,3,k);
    // display(head);

return 0;
}