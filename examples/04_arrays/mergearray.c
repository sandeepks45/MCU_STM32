#include<stdio.h>
void main()
{
    int a[5]={1,3,4},i,j;
    int b[5]={4,1};
    int c[10];
    for(i=0;i<5;i++)
    {
        c[i]=a[i];
    }
    for(j=3;j<=4;j++)
    {
        c[j]=b[j-3];
    }
    printf("Final array is :\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
}