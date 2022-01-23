#include <stdio.h>
#include <stdlib.h>

int main() {

int month, day , year; 
 
    printf ("Enter you date of birth in this format (month/day/year) :"); 
    scanf("%d/%d/%d", &month, &day, &year); 
 
    printf("Alright! you were born on %d-%d-%d\n\n", month, day, year); 
 
 
 
    printf ("Now Enter you date of birth in this format (month*day*year) :"); 
    scanf("%d  %d  %d", &month, &day, &year); 
 
    printf("Cool! you were born on %d/%d/%d\n\n", month, day, year); 
 
    printf(":)"); 



    return 0; 
}