#include<stdio.h>
int main()
{
    struct bitfields
    {
        int bits_1;
        int bits_2;
        int bits_3;
        int bits_4;
    }bit;
    printf("%ld\n",sizeof(bit));
}