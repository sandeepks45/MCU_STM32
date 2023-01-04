#include<stdio.h>
#include"myArith.h"
int main()
{
    int x=20,y=10;
    printf("Addition of the two nos = %d + %d = %d\n",x,y,add(x,y));
    printf("Subtraction of the two nos = %d - %d = %d\n",x,y,sub(x,y));
    printf("Multiplication of the two nos = %d * %d = %d\n",x,y,mul(x,y));
    printf("Division of the two nos = %d / %d = %d\n",x,y,div(x,y));
}  