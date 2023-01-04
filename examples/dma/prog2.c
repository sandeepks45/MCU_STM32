#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *number = (int)calloc(4, sizeof(int));
    number[0] = 9;
    free(number);
    printf("\nSorted integer are ");
    printf("\nnumbers[%d] = %d", 0, number[0]);
    return 0;
}