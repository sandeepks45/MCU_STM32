#include<stdio.h>
int main()
{
    int a[]={1,5,9,7,4},*p;
    p=a;
    ++*p;
    printf("%d\n",*p);
    *p++;
    p+=2;
    printf("%d",*p);
}