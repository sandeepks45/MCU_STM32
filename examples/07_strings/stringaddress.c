#include<stdio.h>
int main()
{
    char s[100];
    printf("Enter the address\n");
    scanf("%[^\n]s",&s);
    printf("Address is: %s",s);
}