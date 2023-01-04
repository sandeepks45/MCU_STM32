#include<stdio.h>
int main() 
{
    int data[5];
    printf("Enter array elements: ");
    for(int i = 0; i < 5; ++i)
        scanf("%d", data + i);
        printf("Pointer array elements are: ");
    for(int i = 0; i < 5; ++i)
        printf("%d\t", *(data + i));
    return 0;
}