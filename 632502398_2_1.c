#include<stdio.h>
int main()
{
int s1,s2,s3,real_score;
scanf("%d",&s1);
scanf("%d",&s2);
scanf("%d",&s3);
real_score = s1+s2+s3;
if(real_score>=0&&real_score<=49)
printf("F");
else if (real_score>=50&&real_score<=54)
printf("D");
else if (real_score>=55&&real_score<=59)
printf("D+");
else if (real_score>=60&&real_score<=64)
printf("C");
else if (real_score>=65&&real_score<=69)
printf("C+");
else if (real_score>=70&&real_score<=74)
printf("B");
else if (real_score>=75&&real_score<=79)
printf("B+");
else if (real_score>=80&&real_score<=100)
printf("A");

}
