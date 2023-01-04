#include<stdio.h>
void swap(int *x,int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
}
int main()
{
    int num1,num2;
    printf("Enter value of Num1: ");
    scanf("%d",&num1);
    printf("Enter value of Num2: ");
    scanf("%d",&num2);
    printf("Before Swapping: Num1 is: %d and Num2 is: %d\n",num1,num2);
    swap(&num1,&num2);
    printf("After  Swapping: Num1 is: %d and Num2 is: %d\n",num1,num2);
    return 0;
}