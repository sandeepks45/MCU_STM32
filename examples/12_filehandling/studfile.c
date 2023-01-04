#include<stdio.h>
typedef struct
{
    int roll,age;
    char name[30],gender;
}student;
int main()
{
    char ch;
    student s;
    FILE *fp;
    fp=fopen("student.dat","w");
    printf("\n Enter student details\n");
    while(1)
    {
        printf("\n Enter student roll no:");
        scanf("%d",&s.roll);
        printf("\n Enter student name:");
        scanf(" %[^\n]",s.name);
        printf("\n Enter student age:");
        scanf("%d",&s.age);
        printf("\n Enter student gender:");
        scanf(" %c",&s.gender);
        printf("\n continue.......(y/n):");
        scanf(" %c",&ch);
        fprintf(fp, "\n%4d\t%-s\t%4d\t%1c", s.roll, s.name, s.age, s.gender);
        if (ch == 'n' || ch == 'N')
            break;
    }
    fclose(fp);
}