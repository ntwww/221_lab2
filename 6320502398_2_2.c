#include<stdio.h>
int main()
{
    int t1,t2;
    float t,z=0;
    char pro;
    scanf("%c",&pro);
    scanf("%f",&t);
    t1=t;
    t2=t*100;
    t2%=100;
    if(pro=='A'){
        z+=199;
        if(t>200){
            t1-=200;
            z+=t1*3;
            z+=t2*3/60.0;
        }
    }else if(pro=='B'){
        z+=299;
        if(t1>400){
            t1-=400;
            z+=t1*2;
            z+=t2*2/60.0;
        }
    }
    printf("%.2f",z);
}
