#include<stdio.h>
int main ()
{
    int n;
    char c,h=92;
    scanf("%c",&c);
    scanf("%d",&n);
    int n1=n;
    n=n%2;
    if(n1%10==5)
        printf("%c",h);
    if(c<'J')
    {
        if(n==1)
            printf("(^_^)");
        else
            printf("{@_@}");
    }
    else if (c<'S')
    {
        if(n==1)
            printf("(*o*)");
        else
            printf("{*v*}");
    }
    else
    {
        if(n==1)
            printf("(T_T)");
        else
            printf("{x_x}");
    }
if(n1%10==5)
        printf("/");



}
