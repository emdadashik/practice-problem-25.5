#include <stdio.h>

int main()
{
    int a,b,c;
    int *p,*q,*r;

    p=&a;
    q=&b;
    r=&c;

    scanf("%d %d %d",&*p,&*q,&*r);

    printf("%d",*p+*q+*r);

    return 0;
}
