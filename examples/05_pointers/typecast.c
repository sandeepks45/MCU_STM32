#include<stdio.h>
int main()
{
    void *p;
    int a=10;
    p=&a;
    printf("%d",*(int *)p);
}