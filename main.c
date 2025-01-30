#include <stdio.h>
#include "D:\Zodiac\zodiac.c"

int main() {
    char name[80];

    printf("Please enter your name: ");
     if (scanf("%s", name) != 1) { 
        printf("Invalid Input!\n");
        return 1;
    }
    
    //Input values
     int bm, bd;

    printf("Input Birthmonth: ");
    if (scanf("%d", &bm) != 1 || bm < 1 || bm > 12) {
        printf("Invalid Input!\n");
    }

    printf("Input Birthday: ");
    if (scanf("%d", &bd) != 1) {
        printf("Invalid Input!\n");
        return 1;
    }

    printf("%s's Zodiac Sign: ", name);

   zodiac_sign (bm, bd);
   return 0;

}