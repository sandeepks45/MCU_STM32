#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workerNo;
}ujob;
struct structjob
{
    char name[32];
    float salary;
    int workerno;
}sjob;
int main()
{
    printf("Size of union = %ld bytes",sizeof(ujob));
    printf("\nSize of structure = %ld bytes\n",sizeof(sjob));
}