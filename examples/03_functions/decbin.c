#include<stdio.h>
int convert(int);
int main()
{
  int num,bin;
  printf("Enter a decimal number: ");
  scanf("%d",&num);
  bin=convert(num);
  printf("%d in decimal = %d in binary",num,bin);
  return 0;
}
int convert(int num)
{
  int bin=0;
  int rem,i=1;
  while(num!=0)
  {
    rem=num%2;
    num/=2;
    bin+=rem*i;
    i*=10;
  }
  return bin;
}