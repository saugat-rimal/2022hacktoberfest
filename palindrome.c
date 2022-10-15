#include <stdio.h>

void main()
{
    int n,r,rev=0;
    printf("Enter a number\n");
    scanf("%d", &n);
    int p=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    
    if(p==rev)
    printf("Palindrome");
    else
    printf("Not Palindrome");
}
