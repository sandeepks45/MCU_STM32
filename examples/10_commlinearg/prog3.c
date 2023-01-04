#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int j;
    j = atoi(argv[1]) + atoi(argv[2]) + atoi(argv[3]);
    printf("%d",j);
    return 0;
}