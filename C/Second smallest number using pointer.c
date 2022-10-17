// WAP in C to input three numbers and display the 2 nd smallest number using pointer. 

#include<stdio.h>
int main()
{
    int *a,*b,*c;
    int d,e,f;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&d,&e,&f);
    
    a=&d;
    b=&e;
    c=&f;
    
    if((*a>*b && *b>*c)||(*a<*b && *b<*c))
    {
        printf("The second smallest number is : %d\n",*b);
    }
    
    if((*a>*b && *c>*a)||(*a<*b && *c<*a))
    {
        printf("The second smallest number is : %d\n",*a);
    }
    
    if((*a>*c && *b<*c)||(*a<*c && *b>*c))
    {
        printf("The second smallest number is : %d\n",*c);
    }
}