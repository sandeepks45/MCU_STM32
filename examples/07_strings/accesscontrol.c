#include<stdio.h>
#include<string.h>
#define N 20
int main()
{
  char pass[N];
  int i, x=0, p;
  printf("Enter a password: ");
  scanf("%s",&pass);
  if(strlen(pass)>=7)
  {
    p=strlen(pass);
    for (i = 0; i < p; i++)
    {
       if ((pass[i] >= 'a' && pass[i] <= 'z') || (pass[i] >= 'A' && pass[i] <= 'Z') || (pass[i] >= '0' && pass[i] <= '9'))
        printf("Success! ");
    }
  }  
 else
   printf("Try Again..");
 return 0;
}