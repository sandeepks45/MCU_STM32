#include<stdio.h>
int main()
{
  float amount;
  float rupee, dollar, pound, euro;
  int choice;
  printf("Following are the Choices:");
  printf("\nEnter 1:Rupee");
  printf("\nEnter 2:Dollar");
  printf("\nEnter 3:Pound");
  printf("\nEnter 4:Euro");
  printf("\nEnter your choice: ");
  scanf("%d",&choice);
  printf("Enter the amount you want to convert:\n");
  scanf("%f",&amount);
  switch(choice)
  {
    case 1:
        dollar = amount / 70;
        printf("%.2f Rupee =  %.2f dollar", amount, dollar);
 
        pound = amount / 88;
        printf("\n%.2f Rupee =  %.2f pound", amount, pound);
 
        euro = amount / 80;
        printf("\n%.2f Rupee =  %.2f euro", amount, euro);
        break;
 
    case 2:
        rupee = amount * 70;
        printf("\n%.2f Dollar =  %.2f rupee", amount, rupee);
 
        pound = amount *0.78;
        printf("\n%.2f Dollar =  %.2f pound", amount, pound);
 
        euro = amount *0.87;
        printf("\n%.2f Dollar =  %.2f euro", amount, euro);
        break;
    case 3:
        rupee = amount * 88;
        printf("\n%.2f Pound =  %.2f rupee", amount, rupee);
 
        dollar = amount *1.26;
        printf("\n%.2f Pound =  %.2f dollar", amount, dollar);
 
        euro = amount *1.10;
        printf("\n%.2f Pound =  %.2f euro", amount, euro);
        break;
    case 4:
        rupee = amount * 80;
        printf("\n%.2f Euro =  %.2f rupee", amount, rupee);
 
        dollar = amount *1.14;
        printf("\n%.2f Euro =  %.2f dollar", amount, dollar);
 
        pound = amount *0.90;
        printf("\n.2%f Euro =  %.2f pound", amount, pound);
        break;
    default:
        printf("\nInvalid Input");
  }
  return 0;
}