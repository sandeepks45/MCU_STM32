#include<stdio.h>
#include<errno.h>
int main()
{
	FILE *fp;
	fp = fopen("Hello.txt","r");
    perror(fp);
	printf(" Value of errno: %d\n ",errno);
	return 0;
}