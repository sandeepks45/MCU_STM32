#include<stdio.h>
#include<string.h>
int main()
{
    char s1[]= "Sandeep";
    char s2[] = "Sanks";
    printf("%d\n",strlen(s1));
    printf("%d\n",strlen(s2));
    printf("%s\n",strcat(s1,s2));
    printf("%s\n",strcpy(s1,s2));
    printf("%d\n",strcmp(s1,s2));
    return 0;
}