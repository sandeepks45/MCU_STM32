#include<stdio.h>
int main()
{
    int a[10] = {9, 8, 7, 2, 4, 3};
    int temp;
    for(int i = 0; i< 6/2; i++)
    {
        temp = a[i];
        a[i] = a[6-i-1];
        a[6-i-1] = temp;
    }
    for(int i = 0; i < 6; i++)
    {
        printf("%d,", a[i]);
    }
}