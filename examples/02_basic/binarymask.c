#include <stdio.h>
int main()
{
 int i,j,k;
 int a=4,b=2,c=7;
 printf("Binform of a=");
 for(i=7;i>=0;i--)
 {
  j=(a>>i) & 0x01;
  printf("%d",j);
 }
 printf("\n");
 printf("Binform of b=");
 for(i=7;i>=0;i--)
 {
  j=(b>>i) & 0x01;
  printf("%d",j);
 }
 printf("\n");
 printf("Binform of c=");
 for(i=7;i>=0;i--)
 {
  j=(c>>i) & 0x01;
  printf("%d",j);
 }
 k=a&0xf8;
 printf("\nAfter masking first 3 bits in a :Binform=");
 for(i=7;i>=0;i--)
 {
  j=(k>>i) & 0x01;
  printf("%d",j);
 }
}