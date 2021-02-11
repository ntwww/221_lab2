#include<stdio.h>
int main()
{
int s1,s2,s3,real_score;
scanf("%d",&s1);
scanf("%d",&s2);
scanf("%d",&s3);
real_score = s1+s2+s3;
if(real_score>0&&real_score<50)
printf("F");
else if (real_score>49&&real_score<55)
printf("D");
else if (real_score>54&&real_score<60)
printf("D+");
else if (real_score>59&&real_score<65)
printf("C");
else if (real_score>64&&real_score<70)
printf("C+");
else if (real_score>69&&real_score<75)
printf("B");
else if (real_score>74&&real_score<80)
printf("B+");
else if (real_score>79&&real_score<100)
printf("A");

}
