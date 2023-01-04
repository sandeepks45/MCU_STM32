#include<stdio.h>
union Student
{
    char stud_name[10];
    int id;
    double age;
}stud_1;                  
void main()
{
    union Student stud_1;
    printf("Enter details of stud_1 : \n");
    printf("Name : ");
    scanf("%s", &stud_1.stud_name);
    printf("ID : ");
    scanf("%d", &stud_1.id);
    printf("age : ");
    scanf("%lf", &stud_1.age);
    printf("***** Student 1 Details *****\n");
    printf("Name of the Student : %s\n", stud_1.stud_name);
    printf("ID of the Student : %d\n", stud_1.id);
    printf("age of the Student : %lf\n", stud_1.age);
    printf("%d",sizeof(stud_1));
}