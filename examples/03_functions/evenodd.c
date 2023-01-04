#include<stdio.h>
void isEvenNum(int number);
void main()
{
      int num;
      printf("Enter an integer: ");
      scanf("%d", &num);
      isEvenNum(num);
} 
void isEvenNum(int number)
{
    if(number%2==0)
        printf("%d is an even number\n",number);
    else
        printf("%d is an odd number\n",number);
}