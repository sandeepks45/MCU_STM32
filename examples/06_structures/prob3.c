#include<stdio.h>
int main()
{
    struct C
    {
        int z;
        double y;
        short int x;
    };
    printf("Size of struct: %ld\n",sizeof(struct C));
    return 0;
}