#include <stdio.h>
int power(int a, int n)
{
    int i,result = 1;
    for (i=0 ; i<n ; i++)
    {
        result  = result * a;
    }
    return result;
}
int main()
{
    char str[100];
    int sum = 0,flag=0,i;

    gets(str);

    for (i=0 ; str[i] ; i++)
    {
        sum += str[i]-96;
    }

    for (i=0 ; i<10 ; i++)
    {
        if(power(2,i)==sum)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Yes\n");
        printf("Cost = 2 ^ %d",i);
    }
    else
        printf("No");

    return 0;

}
