// WAP in C to swap two numbers using pointer and display. 

#include<stdio.h>
void swap(int *,int *);        
void main( )
{
    int n1,n2;
    printf("Enter the two numbers to be swapped : \n");
    scanf("%d%d",&n1,&n2);
    printf("\nThe values of n1 and n2 are : \nn1=%d and n2=%d",n1,n2);
    swap(&n1,&n2);                                          
    printf("\n\nThe values of n1 and n2 after swapping are : \nn1=%d and n2=%d\n",n1,n2);
}
 
void swap(int *n1,int *n2)                           
{ 
    int temp;
    temp=*n1;
    *n1=*n2;
    *n2=temp;
}