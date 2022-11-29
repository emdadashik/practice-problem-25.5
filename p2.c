#include <stdio.h>

int swap (int * p,int* q)
{
    int temp = *p;
    *p = *q;
    *q = temp;
}

int dec_sort(int a[],int n)
{
    int i,j;
    for (i=0 ; i<n-1 ; i++)
    {
        for (j=0 ; j<n-1 ; j++)
        {
            if (a[j]<a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int ace_sort(int a[],int n)
{
     int i,j;
    for (i=0 ; i<n-1 ; i++)
    {
        for (j=0 ; j<n-1 ; j++)
        {
            if (a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
            }
        }
    }
}
int kth_largest(int a[],int n,int k)
{
    dec_sort(a,n);

    return a[k-1];
}
int kth_smallest(int a[],int n,int k)
{
    ace_sort(a,n);

    return a[k-1];
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],k;

    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    dec_sort(a,n);
    int kth_large = kth_largest(a,n,k);
    printf("%dth largest is %d \n",k,kth_large);

    ace_sort(a,n);
    int kth_small = kth_smallest(a,n,k);
    printf("%dth smallest is %d\n",k,kth_small);

    return 0;
}
