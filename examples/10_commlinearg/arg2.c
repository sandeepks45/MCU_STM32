#include<stdio.h>
int main(int argc,char *argv[])
{
    int i,sum=0,n;
    printf("\n%s\n",argv[0]);
    printf("\n%d\n",argc);
    for(i=1;i<argc;i++)
    {
        printf("\nargv[%d]=%s\n",i,argv[i]);
        sscanf(argv[i],"%d",&n);
        sum=sum+n;
    }
    printf("Sum of All Command Line Arguments = %d\n",sum);
}