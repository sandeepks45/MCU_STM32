#include<stdio.h>
void main()
{
    int age=0;
    printf("Enter the age of person:\n");
    scanf("%d",&age);
    if(age==18)
    {
        printf("Get voter card");
    }
    else if (age>18)
    {
        printf("eligible to vote");
    }
    else
    {
        printf("not eligible to vote");
    }
}