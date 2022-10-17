#include <stdio.h>
#include <stdlib.h>
void insert(int a[], int n)
{

   int i,j,x;
   for(int i=1;i<n;i++)
   {
    x=a[i];
    j=i-1;
    while(j>-1 && a[j]>x)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=x;
   }

}
int main()
{
    int a[8] = {4,93,9,2,45,98,4,34};
    insert(a, 8);
    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}