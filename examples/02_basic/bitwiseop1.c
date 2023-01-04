#include<stdio.h>
int main()
{
    int a=10,b=6;
    printf("The value of a&b:%d\n",a&b);
    printf("The value of a|b:%d\n",a|b);
    printf("The value of a^b:%d\n",a^b);
    printf("The value of a&b && b+1 || 0:%d\n",a&b && b+1 || 0);
}
