#include<stdio.h>
int biggestNumber(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter the three numbers\n");
    scanf("%d %d %d",&a,&b,&c);
    int result=biggestNumber(a,b,c);
    printf("Biggest number is: %d\n",result);
    return 0;
}
int biggestNumber(int a,int b,int c)
{
if(a>b)
{
    if(a>c)
        return a;
    else
        return c;
}
else
{
    if(b>c)
        return b;
    else
        return c;
}
}