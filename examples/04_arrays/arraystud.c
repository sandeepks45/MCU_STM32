#include<stdio.h>
int main()
{
    int i,d,stud[10];
    for(i=0;i<10;i++)
    {
        printf("Enter the student Id(s)\t");
        scanf("%d",&d);
        stud[i]=d;
    }
    printf("Ten Students' Id:\n");
    for(i=0;i<10;i++)
    {
        printf("%d\n",stud[i]);
    }
}