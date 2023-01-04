#include<stdio.h>
int main()
{
    struct C
    {
        double z;
        short int y;
        int x;
    };
    printf("Size of struct: %ld\n",sizeof(struct C));
    return 0;
}