#include<stdio.h>
int main()
{
    int a=10;
    int b=sizeof(a++);
    printf("%d %d",a,b);
}