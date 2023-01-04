#include<stdio.h>
int main()
{
    int i, j, d, a[5];
    for (i = 0; i < 5; i++)
    {
        printf("Enter the value\t");
        scanf("%d",&d);
        a[i]=d;
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            if (a[j]<a[j+1])
            {
                d=a[j+1];
                a[j+1]=a[j];
                a[j]=d;
            }
        }
    }
    printf("Descending array is:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\t",a[i]);
    }
}