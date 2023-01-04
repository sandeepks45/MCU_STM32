#include<stdio.h>
#include"HHC.h"
int main()
{
    printf("eStern electricity bill\n");
    lcd_init();
    keypad_init();
    gsm_init();
    gps_init();
    ds1307_init();
    At24_init();
    printer_init();
    printf("\n");
}
