#include<stdio.h>
#include<string.h>
int main(int argc,char *argv[])
{
    int a,b,res;
	sscanf(argv[1],"%d",&a);
	sscanf(argv[2],"%d",&b);
	if(strcmp(argv[3],"A")==0)
	{
		res=a+b;
		printf("The sum is=%d",res);
	}
    else if(strcmp(argv[3],"S")==0)
	{
		res=a-b;
		printf("The sub is=%d",res);
	}
	else if(strcmp(argv[3],"M")==0)
	{
		res=a*b;
		printf("The mul is=%d",res);
	}
	else if(strcmp(argv[3],"D")==0)
	{
		res=a/b;
		printf("The div is=%d",res);
	}
	else
	{
		printf("Kal aana kal");
	}
}