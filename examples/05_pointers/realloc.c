#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int *ptr,n,i,temp;
    printf("\n Enter How many Elements:");
    scanf("%d",&n);
    ptr = (int *)malloc(n*sizeof(int));
    printf("%p\n",ptr);
    if(ptr==NULL)
    {
        fprintf(stderr,"\nFail to allocate memory\n");
        exit(1);
    }
    printf("Memory allocated at:%x",ptr);
    for(i=0;i<n;i++)
    {
        printf("Enter %d element\n",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("Elements are: \n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",ptr[i]);
    }
}
