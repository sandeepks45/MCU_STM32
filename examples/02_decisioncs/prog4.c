#include<stdio.h>
int main()
{
    int a=10,b=2;
    printf("\n Before If Statement \n a=%d\t b=%d\n",a,b);
    if(a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("\n After If Statement \n a=%d\t b=%d\n",a,b);
}