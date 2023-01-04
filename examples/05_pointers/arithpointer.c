#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int (*fun)(int,int);

int main()
{
int i;
fun=add;
i=fun(20,10);
printf("%d\n",i);
fun=sub;
i=fun(20,10);
printf("%d\n",i);
fun=mul;
i=fun(20,10);
printf("%d\n",i);
fun=div;
i=fun(20,10);
printf("%d",i);
}

int add(int a,int b)
{
return (a+b);
}
int sub(int a,int b)
{
return (a-b);
}
int mul(int a,int b)
{
return (a*b);
}
int div(int a,int b)
{
return (a/b);
}