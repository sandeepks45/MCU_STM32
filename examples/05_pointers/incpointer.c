#include<stdio.h>
int main()
{
    int a=5,*p;
    p=&a;
    printf("Before increment the address is:%d and value is:%d\n",p,*p);
    ++*p;
    ++p;
    printf("After increment the address is:%d and value is:%d",p,*p);
}