#include<stdio.h>
int add(int,int);
void subtraction ();
int multiplication();
void division(int,int);
void main()
{
    int a, b, sum, sub, mul, div;
    printf("Enter two numbers:\n ");
    scanf("%d %d",&a,&b);
    add(a,b);
    subtraction(a,b);
    multiplication(a,b);
    division(a,b);
}
int add(int p,int q)
{
    int sum;
    sum = p + q;
    printf("Addition of a numbers is %d\n", sum);
}
void subtraction(int p,int q)
{
    int sub;
    sub = p - q;
    printf("subtraction of a number is %d\n", sub);
}
int multiplication(int p,int q)
{
    int mul;
    mul = p * q;
    printf("Multiplication of a number is %d\n", mul);
}
void division(int p,int q)
{
    int div;
    div = p / q;
    printf("Division of a number is %d", div);
}