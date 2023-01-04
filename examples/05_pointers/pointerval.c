#include<stdio.h>  
int main()  
{  
    int *p;
    int a=10;
    p=&a;  
    printf("The value of p is: %p\n",p);
    printf("The value of a is: %d\n",a);
    printf("The address of p is: %p\n",&p);
    printf("The address of a is: %p",&a);
}  