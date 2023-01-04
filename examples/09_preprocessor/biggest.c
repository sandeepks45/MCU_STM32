#include<stdio.h>
#define BIG(x,y) (x>y)?x:y
int main()
{
    int a,b;
    printf("\n Enter any two integers: \n");
    scanf("%d %d",&a,&b);
    printf("\n Biggest of two no.s: %d\n",BIG(a,b));
}