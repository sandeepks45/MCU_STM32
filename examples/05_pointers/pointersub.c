#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6}, *i;
    i=arr;
    printf("%d\n",*(i+5));
    printf("%d\n",*(i+3));
    printf("%d",*(i+5)-*(i+3));
}