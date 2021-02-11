#include<stdio.h>
int main ()
{
    int n,x;
    char c,h=92;
    scanf("%c",&c);
    scanf("%d",&n);
    x=c-n;
    int n1=n;


    x=x%2;
    if(n1%10==5)
        printf("%c",h);
    if(c>='A'&&c<='I')
    {
        if(x==1)
            printf("(^_^)");
        else
            printf("{@_@}");
    }
    else if (c>='J'&&c<='R')
    {
        if(x==1)
            printf("(*o*)");
        else
            printf("{*v*}");
    }
    else
    {
        if(x==1)
            printf("(T_T)");
        else
            printf("{x_x}");
    }
if(n1%10==5)
        printf("/");



}
