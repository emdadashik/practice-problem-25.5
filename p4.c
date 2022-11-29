#include <stdio.h>

void print(int a)
{
    if (a>0)
    {
        printf("%d ",a);
        print(a-1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    print(n);

    return 0;
}
