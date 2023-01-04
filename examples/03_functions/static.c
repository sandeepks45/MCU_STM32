#include<stdio.h>
int increment();
int main()
{
    increment();
    increment();
    increment();
}
int increment()
{
    static int count=0;
    count++;
    printf("%d",count);
}