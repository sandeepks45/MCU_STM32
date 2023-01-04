#include<stdio.h>
void print1To10(int);
int main()
{
    int N=10;
    printf("\nNumbers from 1 To 10 are:\n ");
    print1To10(N);
    return 0;
}
void print1To10(int N)
{
    if(N)
        print1To10(N-1);
    else
        return;
    printf("%d\n", N);
}