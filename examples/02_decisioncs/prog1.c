#include<stdio.h>
int main()
{
    int a=10;
    if(a>9)
    {
        a++;
        printf("The value of a is:%d",a);
    }
    else
    {
        --a;
        printf("The value of a is:%d",a);
    }
}