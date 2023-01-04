#include<stdio.h>
struct student
{
    int id;
    char name[20];
    float height;
    
    struct marks
    {
        float maths;
        float science;
        float english;
        float total;
        float avg;
    }m;
}s={45,"Sandeep KS",6.02};
int main()
{
    s.m.maths=78;
    s.m.science=76;
    s.m.english=92;
    s.m.total=(s.m.maths+s.m.science+s.m.english);
    s.m.avg=s.m.total/3;
    printf("Student Details are: \n %d \n %s \n %f \n",s.id, s.name, s.height);
    printf("Average And Total Marks Respectively Are: \n %f \n %f",s.m.total,s.m.avg);
}