#include<stdio.h>
int main()
{
    int i,n,k=0,d,a[6];
    printf("Enter the value:\n");
    for(i=0;i<3;i++)
    {
      scanf("%d",&d);
      a[i]=d;  
    }
    for(i=3;i<6;i++)
    {
      printf("Enter the value to be inserted:\t");  
      scanf("%d",&n);
      a[i]=n;  
    }
    printf("After updation the array is:\n");
    for(i=0;i<6;i++)
    {
        printf("%d\t",a[i]);
    }
}
