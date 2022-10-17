#include<stdio.h>
#include<stdlib.h>

void selection(int a[],int n)
{
    int i=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        int k=i;
        for(int j=i;j<n;j++)
        {
           if(a[j]<a[k])
           k=j;
           else
           continue;
        }
        int temp=a[i];
        a[i]=a[k];
        a[k]=temp;
    }

    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}

int main()
{
    int arr[5]={8,4,2,5,4};
    selection(arr,5);
    return 0;
}