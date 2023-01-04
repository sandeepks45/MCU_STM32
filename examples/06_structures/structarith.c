#include<stdio.h>
struct arith
{
    int a,b;
    int (*fnptr)(int,int);
};
int addition(int x,int y)
{
    return x+y;
}
int subtraction(int x,int y)
{
    return x-y;
}
int main()
{
    struct arith add,sub;
    printf("Enter the values of a and b: \n");
    scanf("%d %d",&add.a,&add.b);
    sub=add;
    add.fnptr=addition;
    sub.fnptr=subtraction;
    printf("\nAddition value is: %d\n",add.fnptr(add.a,add.b));
    printf("Subtraction value is: %d\n",sub.fnptr(sub.a,sub.b));
}