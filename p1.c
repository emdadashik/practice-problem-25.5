#include <stdio.h>

int main()
{
    int n;

    scanf("%d",&n);

    int a[n],k,count=0;

    for (int i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);

    for (int i=0 ; i<n ; i++)
    {
        if (a[i]!=k)
            count++;
    }
    printf("%d",count);
}

