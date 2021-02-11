#include<stdio.h>
int main ()
{
int day,m;
scanf("%d %d",&day,&m);
if(m==4||m==6||m==9||m==11)
    day=(day+30)%7;
else if (m==2)
    day=(day+28)%7;
else
    day=(day+31)%7;
if(day==0)
    day=7;
printf("%d",day);
}

