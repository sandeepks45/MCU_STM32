#include<stdio.h>
void disp();
int main()
{
    int a=10,b=-10;
    printf("\n File in use: %s\n",__FILE__);
    printf("\n Present line: %d\n",__LINE__);
    printf("\n Present function: %s\n",__FUNCTION__);
    disp();
    printf("\n Present date: %s\n",__DATE__);
    printf("\n Standard C: %d\n",__STDC__);
}
void disp()
{
    printf("\n Present function: %s\n",__FUNCTION__);
}