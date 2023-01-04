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
    int count=0;
    count++;
    printf("%d",count);
}