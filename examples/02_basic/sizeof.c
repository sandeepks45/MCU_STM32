#include<stdio.h>
int main() 
{
    int a;
    float f;
    double d;
    char c;
    long double ld;
    long int li;
    short int si;
    unsigned int ui;
    printf("Size of int: %d bytes\n", sizeof(a));
    printf("Size of float: %d bytes\n", sizeof(f));
    printf("Size of double: %d bytes\n", sizeof(d));
    printf("Size of char: %d byte\n", sizeof(c));
    printf("Size of long double: %d bytes\n", sizeof(ld));
    printf("Size of long int: %d bytes\n", sizeof(li));
    printf("Size of short int: %d bytes\n", sizeof(si));
    printf("Size of unsigned int: %d bytes\n", sizeof(ui));
    return 0;
}