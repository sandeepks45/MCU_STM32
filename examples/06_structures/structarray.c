#include<stdio.h>
struct stud
{
    int roll;
    char name[20];
};
int main()
{
    int i;
    struct stud s[2];
    for(i=0;i<2;i++)
    {
        printf("Enter roll no. and name\n");
        scanf("%d %s",&s[i].roll,&s[i].name);
    }
    for(i=0;i<2;i++)
    {
        printf("\nDetails of the students\n");
        printf("%d\t%s",s[i].roll,s[i].name);
    }
}