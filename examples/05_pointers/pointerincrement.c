#include<stdio.h>
int main()
{
    int arr[6]={1,2,3,4,5,6}, *i;
    i=arr;
    printf("Address: %d\n",i);
    printf("Value: %d\n",*i);
    printf("Address After Increment: %d\n",(++i));
    printf("Value After Increment: %d",*i);
}