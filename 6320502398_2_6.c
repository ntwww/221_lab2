#include<stdio.h>
int main()
{
    char x[10];
    scanf("%s",x);
    int i;
    for(i=0; i<x[i]; i++)
    {
        switch(x[i])
        {
        case '0':
            printf("zero");
            break;
        case '1':
            printf("one");
            break;
        case '2':
            printf("two");
            break;
        case '3':
            printf("three");
            break;
        case '4':
            printf("four");
            break;
        case '5':
            printf("five");
            break;
        case '6':
            printf("six");
            break;
        case '7':
            printf("seven");
            break;
        case '8':
            printf("eight");
            break;
        case '9':
            printf("nine");
            break;
        }
        if (i<x[i+1])
            printf("-");
    }

}
