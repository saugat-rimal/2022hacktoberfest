#include<stdio.h>
#include<stdlib.h>

void merge(int a[],int low,int mid,int high)
{
    int i,j,k;
    k=low;
    i=low;
    j=mid+1;
    int b[100];
   while(i<=mid && j<=high)
   {
    if(a[i]<a[j])
     b[k++]=a[i++];
     else
     b[k++]=a[j++];

   }
     for(;i<=mid;i++)
     b[k++]=a[i];
     for(;j<=high;j++)
     b[k++]=a[j];
   for(int i=low;i<=high;i++)
   a[i]=b[i];

}

void ImergeSort(int a[],int n)
{
    int p,l,mid,h,i;
    for(p=2;p<=n;p=p*2)
    {
        for(i=0;i+p-1<n;i=i+p)
        {
            l=i;
            h=i+p-1;
            mid=(l+h)/2;
            merge(a,l,mid,h);
        }
    }
    if((p/2)<n)
    {
        merge(a,0,p/2-1,n-1);
    }
}

int main()
{
    int a[9]={72,3,882,83,89,9,0,23,8};
    ImergeSort(a,9);
    for(int i=0;i<9;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}