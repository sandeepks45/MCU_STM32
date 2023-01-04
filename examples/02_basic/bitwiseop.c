#include<stdio.h>
int main()
{
    int a=50;
    int b=5;
    int result=0;
    result=a&b;
    printf("Binary AND operator of a and b is %d\n",result);
    result=a^b;
    printf("Binary OR operator of a and b is %d\n",result);
    result=~a;
    printf("Binary Ones complement operator of a and b is %d\n",result);
    result=a<<2;
    printf("Binary left shift operator of a and b is %d\n",result);
    result=a>>2;
    printf("Binary right shift operator of a and b is %d\n",result);
    return 0;
}