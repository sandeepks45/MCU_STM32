#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float height;
}s={45,"Sandeep KS",6.02};
int main()
{
    printf("%d %s %f",s.id, s.name, s.height);
}
