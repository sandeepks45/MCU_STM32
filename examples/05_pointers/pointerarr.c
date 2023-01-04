#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6}, *i;
    i=arr;
    printf("using pointer: %d\n",*(i+3));
    printf("from array using content by pointer: %d",*(arr+3));
}