#include<stdio.h>
struct emp
{
int eid;
char ename[20];
char edept[10];
float esal;
};
int main()
{
struct emp e;
printf("Enter Employee detail \n");
printf("Emp id. :-\t");
scanf("%d",&e.eid);
printf("Emp Name :-\t");
scanf("%s",&e.ename);
printf("Emp Department :-\t");
scanf("%s",&e.edept);
printf("Emp salary :-\t");
scanf("%f",&e.esal);
printf("Employee details are \n \n Employee name:- %s\n Employee id:- %d\n Employee dept:- %s\n Employee salary:- %f",e.ename,e.eid,e.edept,e.esal);
}
