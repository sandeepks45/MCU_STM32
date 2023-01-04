#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ptr,i;
    ptr = (int *)calloc(5,sizeof(int));
    printf("%p\n",ptr);
    if(ptr==NULL)
    {
        printf("Memory is allocated.");
    }
    else
    {
        for(i=0;i<5;i++)
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
}
