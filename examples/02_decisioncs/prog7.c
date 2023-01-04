#include<stdio.h>
void main()
{
    int m1,m2,m3,avg,percentage;
    printf("Enter your marks of three subjects: ");
    scanf("%d",&m1);
    scanf("%d",&m2);
    scanf("%d",&m3);
    avg=(m1+m2+m3)/3;
    percentage=(m1+m2+m3/300)*100;
    if(percentage<0 || percentage>100)
    {
        printf("Wrong Entry");
    }
    else if(percentage<50)
    {
        printf("Grade F");
    }
    else if(percentage>=50 && percentage<60)
    {
        printf("Grade D");
    }
    else if(percentage>=60 && percentage<70)
    {
        printf("Grade C");
    }
    else if(percentage>=70 && percentage<80)
    {
        printf("Grade B");
    }
    else if(percentage>=80 && percentage<90)
    {
        printf("Grade A");
    }
    else
    {
        printf("Grade A+");
    }
}