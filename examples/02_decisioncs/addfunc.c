#include<stdio.h>
int sum_two(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b, sum;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    sum = sum_two(a, b);
    printf("Sum of two numbers: %d", sum);
    return 0;
}