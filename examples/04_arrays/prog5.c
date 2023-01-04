#include<stdio.h>
void f(int a[2][3])
{
    a[0][1]=3;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d",a[i][j]);
        }
    }
}
void main()
{
    int a[2][3]={0,0,1,6};
    f(a);
}