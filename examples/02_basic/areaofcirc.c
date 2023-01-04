#include<stdio.h>
int main()
{
    int radius;
    float PI=3.14,area;
    printf(" Enter the Radius of Circle: ");
    scanf("%d",&radius);
    area = PI * radius * radius;
    printf("\n Area of a Circle : %f ",area);
    return 0;
}