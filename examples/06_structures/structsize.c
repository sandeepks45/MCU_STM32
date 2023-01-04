#include<stdio.h>
#pragma pack(1) //(for printing the size 13 or else it'll print the size 16.)
struct student
{
    char anme;
    int age;
    int aadhar;
    float height;
}p;
int main()
{
    printf("%d",sizeof(p));
}
