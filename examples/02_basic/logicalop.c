#include<stdio.h>
int main()
{
    int a=10,b=6,c,d;
    c=(a>b)&&a++;
    printf("c=%d\n",c);
    printf("a=%d\n",a);
    d=(a>b)||a++;
    printf("d=%d\n",d);
    printf("a=%d\n",a);
    return 0;
}