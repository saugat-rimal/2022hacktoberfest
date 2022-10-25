#include<stdio.h>
#include<stdlib.h>
#include<string.h>

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

int pop()
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
    return x;
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

int pre(char x)
{
    if(x=='+' || x=='-')
    return 1;
    else if(x=='*' || x=='/')
    return 2;
    return 0;
}

int isOperand(char x)
{
    if(x=='+' || x=='-' || x=='*' || x=='/')
    return 0;
    else
    return 1;
}

char * InToPost(char *infix)
{
    int i=0,j=0;
    char *postfix;
    int len=strlen(infix);
    postfix=(char *)malloc((len+2)*sizeof(char));

    while(infix[i]!='\0')
    {
        if(isOperand(infix[i]))
        postfix[j++]=infix[i++];

        else
        {
            if(pre(infix[i])>pre(top->data))
            push(infix[i++]);
            else
            {
             postfix[j++]= pop();
            }
        }
    }
    while(top!=NULL)
    postfix[j++]=pop();
    postfix[j++]='\0';
    return postfix;
}

int main()
{
    char *infix ="a+b*c-d/e";
    push(' ');
    char *postfix=InToPost(infix);
    printf("%s",postfix);
}