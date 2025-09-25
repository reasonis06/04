#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int year;
    int result;
    
    printf("input the year: ");
    scanf("%i", &year);
    
    result = (year%4 == 0 && year%100 != 0) || (year%400 == 0);
    // True = 1, False =0
    
    printf("is the year %i the leap year? : %i\n", year, result);
    
    system("PAUSE");
    return 0;
}
