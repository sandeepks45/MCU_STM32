#include<Stdio.h>
union test1
{
    int x;
    int y;
}Test1;
union test2
{
    int x;
    char y;
}Test2;
union test3
{
    int x[10];
    char y;
}Test3;
int main()
{
    printf("%lu %lu %lu",sizeof(Test1),sizeof(Test2),sizeof(Test3));
}