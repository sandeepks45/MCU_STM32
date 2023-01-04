#include<stdio.h>
int main()
{
    enum days{Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};
    enum days weekDay;
    printf("Insert a week day number: ");
    scanf("%d",&weekDay);
    switch(weekDay)
    {
    case 1:
        printf("Number of the day: %d and day is sunday",weekDay);
        break;
    case 2:
        printf("Number of the day: %d and day is monday",weekDay);
        break;
    case 3:
        printf("Number of the day: %d and day is tuesday",weekDay);
        break;
    case 4:
        printf("Number of the day: %d and day is wednesday",weekDay);
        break;
    case 5:
        printf("Number of the day: %d and day is thursday",weekDay);
        break;
    case 6:
        printf("Number of the day: %d and day is friday",weekDay);
        break;    
    case 7:
        printf("Number of the day: %d and day is saturday",weekDay);
        break;
    default:
        printf("Error. Please insert a valid week day.");
        break;
    }
}