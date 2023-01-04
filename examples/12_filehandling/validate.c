#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("hello.txt","w");
    if(fp==NULL)
    {
        printf("File not found");
    }
    else
    {
        printf("File found");
    }
}