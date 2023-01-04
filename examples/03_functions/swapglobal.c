#include<stdio.h>
int a,b;
int initialize();
void swap();
int main()
{
    initialize();
    printf("Before swapping: a=%d & b=%d\n",a,b);
    swap();
    printf("After swapping: a=%d & b=%d\n",a,b);
}
int initialize()
{
    a=10,b=5;
}
void swap()
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}