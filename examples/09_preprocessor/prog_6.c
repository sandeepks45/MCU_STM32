#include<stdio.h>
void add(void);
#define ADDITION() add()
int main()
{
    ADDITION();
}
void add(void)
{
    printf("\n10+20=%d\n",10+20);
}