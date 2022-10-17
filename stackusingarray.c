#include<stdio.h>
#include<stdlib.h>
struct Stack
{
    int size;int top;
    int *S;
};
void create(struct Stack *st)
{
    printf("Enter Size: ");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*)malloc(st->size*sizeof(int));
    
}

void Display(struct Stack st)
{
    for(int i=st.top;i>=0;i--)
    printf("%d ",st.S[i]);
}

void push(struct Stack *st,int x)
{
    if(st->top==st->size-1)
    printf("Stack Overflow\n");

    else
    {
        (st->top)++;
        st->S[st->top]=x;
    }
}

struct Stack *pop(struct Stack *st)
{
    if(st->top==-1)
    printf("Stack Underflow\n");

    else
    {
       
       printf("%d\n",st->S[st->top--]);
    }
}

struct Stack *peek(struct Stack *st,int index)
{
    int x=-1;
    if(st->top-index+1<0)
    printf("Invalid Index\n");
    printf("%d ",st->S[st->top-index+1]);
}

int isEmpty(struct Stack st)
{
    if(st.top==-1)
    return 1;
    return 0;
}

struct Stack stackTop(struct Stack st)
{
    if(!isEmpty(st))
    printf("%d\n",st.S[st.top]); 
    
}

int isFull(struct Stack st)
{
    if(st.top==st.size-1);
    return 1;
    return 0;
}

int main()
{
    struct Stack st;
    create(&st);
    push(&st,10);
    push(&st,84);
    push(&st,48);
    push(&st,90);
    pop(&st);
    pop(&st);
    pop(&st);
    pop(&st);
    pop(&st);
   
    return 0;
}
