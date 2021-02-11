#include<stdio.h>
int main()
{
    int x,y,z,count,i;
    scanf("%d%d%d",&x,&y,&z);
    int n[3];
    char c[3];
    if(x>y)
    {
        count = x;
        x=y;
        y=count;

    }
    if(x>z)
    {
        count = x;
        x=z;
        z= count;

    }
    if(y>z)
    {
        count = y;
        y=z;
        z= count;
    }
    scanf("%s",c);
    for(i=0; i<3; i++)
    {
        if(c[i]=='A')
        {
            n[i]=x;
        }
        else if (c[i]=='B')
        {
            n[i]=y;
        }
        else
        {
         n[i]=z;
        }
    }
    printf("%d %d %d",n[0],n[1],n[2]);



}
