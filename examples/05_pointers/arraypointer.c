#include<stdio.h>
int (*fnptr[4])(int,int);
int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}
int mul(int x,int y)
{
    return x*y;
}
int div(int x,int y)
{
    return y/x;
}
void main()
{
    int z=0;
    fnptr[0]=add;
    fnptr[1]=sub;
    fnptr[2]=mul;
    fnptr[3]=div;
    char ch;
    printf("Enter the operation you wanna perform\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case '+' :

         z=(*fnptr[0])(10,30);
        printf(" value is %d\n",z);
         break;
         case '-' :
        z=(*fnptr[1])(10,30);
         printf(" value is %d\n",z);
        break;
        case '*' : 
        z=(*fnptr[2])(10,30);
        printf(" value is %d\n",z);
        break;
        case '/' :
         z=(*fnptr[3])(10,30);
        printf(" value is %d\n",z);
        break;
        default: printf("Invalid");
}
}