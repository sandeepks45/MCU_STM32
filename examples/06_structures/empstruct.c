#include<stdio.h>
struct employee
{
    int id;
    char name[20];
    char dept[20];
    int salary;
}s[5];
int main()
{
    int i;
    printf("Enter details of 5 employees:\n");
    for(i=0;i<5;i++)
    {
        printf("Enter id :");
        scanf("%d", &s[i].id);
        printf("Enter name :");
        scanf("%s", &s[i].name);
        printf("Enter dept :");
        scanf("%s", &s[i].dept);
        printf("Enter salary :");
        scanf("%d", &s[i].salary);
    }
    printf("\nThe details of emplyoees are :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t%s\t%s\t%d",s[i].id, s[i].name, s[i].dept, s[i].salary);
    }
    return 0;
}