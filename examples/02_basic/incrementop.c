#include<stdio.h>
int main()
{
    int a=8,b,c,d;
    b=(a++,++a);
    c=a++,++a;
    d=(a++,++a,a>>2);
    printf("b=%d\n",b);
    printf("c=%d\n",c);
    printf("d=%d\n",d);
    return 0;
}