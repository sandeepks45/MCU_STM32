#include<stdio.h>
int main()
{
    int a=10,b=5,c,d,e;
    c=++b;
    d=a>b&&b!=10&&b<11&&a>5;
    e=a<b&&d==b||c>=b;
    printf("d=%d\n",d);
    printf("e=%d\n",e);
    return 0;
}