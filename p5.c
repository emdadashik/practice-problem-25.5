#include <stdio.h>

int sequence_sum(int n)
{
    if(n==0)
        return 0;
    else
        return n+sequence_sum(n-1);
}

int main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sequence_sum(a));

    return 0;
}
