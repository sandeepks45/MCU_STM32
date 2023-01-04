#include<stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int (*fun)(int,int);

int main()
{
    int i;
    char u;
    printf("For addition press +\nFor subtraction press -\nFor multiplication press *\nFor division press /\n");
    scanf("%c",&u);
    switch(u)
    {
        case '+':
        {
            fun=add;
            i=fun(20,10);
            printf("%d\n",i);
            break;
        }
        case '-':
        {
            fun=sub;
            i=fun(20,10);
            printf("%d\n",i);
            break;
        }        
        case '*':
        {
            fun=mul;
            i=fun(20,10);
            printf("%d\n",i);
            break;
        }        
        case '/':
        {
            fun=div;
            i=fun(20,10);
            printf("%d\n",i);
            break;
        }        
        default:
        {
            printf("Enter a valid symbol\n");  
            break;
        }            
    }
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