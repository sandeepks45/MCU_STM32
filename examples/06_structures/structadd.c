#include<stdio.h>
struct sum
{
int a;
int b;
};
void main()
{
int sum1;
struct sum s;
printf("Enter Two Numbers:\n");
scanf("%d %d",&s.a,&s.b);
sum1=s.a+s.b;
printf("Sum Of Two Numbers=%d",sum1);
}